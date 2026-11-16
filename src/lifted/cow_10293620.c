/* f_0x10293620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10293620(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 4u);
    d2 = (double)rdf32(sp0 + 8u);
    wrf32(arg1, (float)d2);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0xedu);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg4, 1u, COW_IMG(0x103bb254u), 0xefu, in_edi);
    wr32(arg1 + 4u, t5);
    esi = arg3;
    edi = t5;
    ecx = arg4 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg4 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(arg1 + 8u, arg4);
    wr32(arg1 + 0xcu, arg5);
    wr32(arg1 + 0x10u, arg6);
    if (arg5 == 0u) goto L_102936c9;
    if (arg5 != 2u) goto L_102936a1;
    wr32(arg1 + 0x14u, COW_IMG(0x102934e0u));
    return;
L_102936a1: ;
    if (arg5 != 4u) goto L_102936b0;
    wr32(arg1 + 0x14u, COW_IMG(0x10293560u));
    return;
L_102936b0: ;
    if (arg5 != 8u) goto L_102936bf;
    wr32(arg1 + 0x14u, COW_IMG(0x102935b0u));
    return;
L_102936bf: ;
    if (arg5 == 0x10u)
    {
        eax = COW_IMG(0x102935e0u);
        goto L_102936ce;
    }
L_102936c9: ;
    eax = COW_IMG(0x102934d0u);
L_102936ce: ;
    wr32(arg1 + 0x14u, eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293620(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
