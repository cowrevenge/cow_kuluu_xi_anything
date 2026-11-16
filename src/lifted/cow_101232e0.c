/* f_0x101232e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101232e0(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101232f8;
    }
    ecx = t2;
    edx = t3;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u) goto L_10123340;
L_101232f8: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10123350u), 1, 4u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_10123340;
    }
    edx = t6;
    if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4du) == 5u)
    {
        ecx = rd32(COW_IMG(0x104e1d4cu));
        goto L_10123340;
    }
    if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u);
        edx = rd32(COW_IMG(0x1057876cu));
        goto L_10123335;
    }
    edx = rd32(COW_IMG(0x1057876cu));
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10662d40u));
        goto L_10123340;
    }
    ecx = rd32(COW_IMG(0x10662d40u));
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_10123340;
    }
    eax = t7;
    edx = t9;
L_10123335: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101260d0u), eax, rd32(COW_IMG(0x104e1d4cu)), edx);
L_10123340: ;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_cdecl(g, COW_IMG(0x10122e30u), 1, 3u);
    t11 = g->edx;
    d12 = cow_take_float(g);
    g->edx = t11;
    fpush(g, d12);
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101232e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101232e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
