/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "transaction.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

result_t *
transfer_1(transaction_t *argp, CLIENT *clnt)
{
	static result_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, TRANSFER,
		(xdrproc_t) xdr_transaction_t, (caddr_t) argp,
		(xdrproc_t) xdr_result_t, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result_t *
deposit_1(transaction_t *argp, CLIENT *clnt)
{
	static result_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, DEPOSIT,
		(xdrproc_t) xdr_transaction_t, (caddr_t) argp,
		(xdrproc_t) xdr_result_t, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result_t *
withdraw_1(transaction_t *argp, CLIENT *clnt)
{
	static result_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, WITHDRAW,
		(xdrproc_t) xdr_transaction_t, (caddr_t) argp,
		(xdrproc_t) xdr_result_t, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result_t *
inquiry_1(transaction_t *argp, CLIENT *clnt)
{
	static result_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, INQUIRY,
		(xdrproc_t) xdr_transaction_t, (caddr_t) argp,
		(xdrproc_t) xdr_result_t, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result_t *
startsession_1(void *argp, CLIENT *clnt)
{
	static result_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, STARTSESSION,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_result_t, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

result_t *
stopsession_1(void *argp, CLIENT *clnt)
{
	static result_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, STOPSESSION,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_result_t, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
