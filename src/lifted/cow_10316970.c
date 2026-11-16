/* f_0x10316970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10316970(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    int64_t q7;
    int64_t q8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 != 0u)
    {
        eax = arg1;
        ecx = arg4;
        edx = arg2;
        ebx = arg3;
L_103169a0: ;
        cf = ecx & 1u;
        of = ecx >> 0x1fu;
        { /* rcr ebx, 1 */ { unsigned c = ((unsigned)(0x1u) & 31u) % 33u; uint32_t r = ebx; unsigned i; for (i = 0; i < c; i++) { unsigned o = r & 1u; r = (uint32_t)((r >> 1) | ((uint32_t)cf << 31)); cf = o; } if (c) { of = ((r >> 31) ^ (r >> 30)) & 1u; } ebx = (uint32_t)(r); } }
        cf = edx & 1u;
        of = edx >> 0x1fu;
        { /* rcr eax, 1 */ { unsigned c = ((unsigned)(0x1u) & 31u) % 33u; uint32_t r = eax; unsigned i; for (i = 0; i < c; i++) { unsigned o = r & 1u; r = (uint32_t)((r >> 1) | ((uint32_t)cf << 31)); cf = o; } if (c) { of = ((r >> 31) ^ (r >> 30)) & 1u; } eax = (uint32_t)(r); } }
        if (ecx >> 1u != 0u)
        {
            ecx = ecx >> 1u;
            edx = edx >> 1u;
            goto L_103169a0;
        }
        edx = edx >> 1u;
        t5 = cow_divu64(g, edx, eax, ebx);
        t6 = cow_modu64(g, edx, eax, ebx);
        q7 = (uint64_t)cow_mulu(t5, arg4);
        q8 = (uint64_t)cow_mulu(arg3, t5);
        if ((uint32_t)(q7) + cow_qhi(q8) < cow_qhi(q8))
        {
            esi = t5;
            goto L_103169ce;
        }
        eax = (uint32_t)(q8);
        edx = (uint32_t)(q7) + cow_qhi(q8);
        esi = t5;
        if (edx > arg2) goto L_103169ce;
        cf = edx < arg2;
        if (cf) goto L_103169cf;
        if (eax <= arg1) goto L_103169cf;
L_103169ce: ;
        esi = esi - 1u;
L_103169cf: ;
        eax = esi;
        edx = 0u;
    }
    else
    {
        t1 = cow_divu(g, arg2, arg3);
        t2 = cow_modu(g, arg2, arg3);
        t3 = cow_divu64(g, t2, arg1, arg3);
        t4 = cow_modu64(g, t2, arg1, arg3);
        eax = t3;
        edx = t1;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316970(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
