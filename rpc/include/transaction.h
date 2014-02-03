/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TRANSACTION_H_RPCGEN
#define _TRANSACTION_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct transaction_t {
	int to;
	int from;
	int account;
	double value;
};
typedef struct transaction_t transaction_t;

struct result_t {
	double value;
	int success;
	struct {
		u_int message_len;
		char *message_val;
	} message;
};
typedef struct result_t result_t;

#define TRANSACTION 10101
#define TVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define TRANSFER 1
extern  result_t * transfer_1(transaction_t *, CLIENT *);
extern  result_t * transfer_1_svc(transaction_t *, struct svc_req *);
#define DEPOSIT 2
extern  result_t * deposit_1(transaction_t *, CLIENT *);
extern  result_t * deposit_1_svc(transaction_t *, struct svc_req *);
#define WITHDRAW 3
extern  result_t * withdraw_1(transaction_t *, CLIENT *);
extern  result_t * withdraw_1_svc(transaction_t *, struct svc_req *);
#define INQUIRY 4
extern  result_t * inquiry_1(transaction_t *, CLIENT *);
extern  result_t * inquiry_1_svc(transaction_t *, struct svc_req *);
#define STARTSESSION 8
extern  result_t * startsession_1(void *, CLIENT *);
extern  result_t * startsession_1_svc(void *, struct svc_req *);
#define STOPSESSION 9
extern  result_t * stopsession_1(void *, CLIENT *);
extern  result_t * stopsession_1_svc(void *, struct svc_req *);
extern int transaction_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define TRANSFER 1
extern  result_t * transfer_1();
extern  result_t * transfer_1_svc();
#define DEPOSIT 2
extern  result_t * deposit_1();
extern  result_t * deposit_1_svc();
#define WITHDRAW 3
extern  result_t * withdraw_1();
extern  result_t * withdraw_1_svc();
#define INQUIRY 4
extern  result_t * inquiry_1();
extern  result_t * inquiry_1_svc();
#define STARTSESSION 8
extern  result_t * startsession_1();
extern  result_t * startsession_1_svc();
#define STOPSESSION 9
extern  result_t * stopsession_1();
extern  result_t * stopsession_1_svc();
extern int transaction_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_transaction_t (XDR *, transaction_t*);
extern  bool_t xdr_result_t (XDR *, result_t*);

#else /* K&R C */
extern bool_t xdr_transaction_t ();
extern bool_t xdr_result_t ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TRANSACTION_H_RPCGEN */
