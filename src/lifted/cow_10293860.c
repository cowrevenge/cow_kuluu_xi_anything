/* f_0x10293860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10293860(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t3;
    uint32_t t4;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(rd32(sp0 + 8u) - 1u) <= 0)
    {
        eax = rd32(sp0 + 8u);
        ecx = 0u;
        edx = rd32(sp0 + 8u) - 1u;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 8u) - 1u;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        ecx = 0u;
L_10293878: ;
        d1 = (double)rdf32(arg1 + ecx * 4u);
        wrf32(sp0 + 8u, (float)fabs(d1));
        if ((cow_fsw(g, fabs(d1), x0, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, fabs(d1), x0, 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, fabs(d1), x0, 1u) & 0x4100u;
            x0 = (double)rdf32(sp0 + 8u);
        }
        if ((int32_t)(ecx + 1u) < (int32_t)edx)
        {
            ecx = ecx + 1u;
            goto L_10293878;
        }
        ecx = ecx + 1u;
    }
    d2 = fr(g, x0 / (double)rdf32(sp0 + 0xcu));
    fpush(g, d2);
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    if (t3 != 0u)
    {
        eax = t3;
        goto L_102938ac;
    }
    eax = t3;
    wr32(arg4, eax);
    return;
L_102938ac: ;
    if ((int32_t)eax >= 2) goto L_102938bd;
    wr32(arg4, 2u);
    return;
L_102938bd: ;
    if ((int32_t)eax >= 8) goto L_102938ce;
    wr32(arg4, 4u);
    return;
L_102938ce: ;
    if ((int32_t)eax >= 128) goto L_102938e1;
    wr32(arg4, 8u);
    return;
L_102938e1: ;
    t4 = (((int32_t)eax >= 32768) - 1u & 0xfffffff0u) + 0x20u;
    wr32(arg4, t4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
