/* f_0x1002c400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1002c400(Guest* g)
{
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (arg2 != 2u) goto L_1002c4b2;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        eax = t1;
        goto L_1002c4c5;
    }
    eax = t1;
    ecx = rd32(t1);
    edx = t2;
L_1002c42a: ;
    if (edx == arg1)
    {
        edx = edx + 1u;
        goto L_1002c43b;
    }
    edx = edx + 1u;
    if (rd32(ecx + 4u) != 0u)
    {
        eax = ecx + 4u;
        ecx = rd32(ecx + 4u);
        goto L_1002c42a;
    }
    eax = ecx + 4u;
L_1002c43b: ;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, 2u);
    t3 = rd32(eax);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x1002a8b0u), t3, 2, 2u, sp0 - 0x20u);
    t4 = g->ecx;
    d5 = (double)(float)(double)rdf32(self + 0x24u);
    wrf32(sp0 - 0x10u, (float)d5);
    d6 = (double)(float)(double)rdf32(self + 0x2cu);
    wrf32(sp0 - 0xcu, (float)d6);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    d7 = (double)(float)(double)rdf32(self + 0x28u);
    wrf32(sp0 - 8u, (float)d7);
    wr32(sp0 - 4u, 0x3f800000u);
    g->eax = sp0 - 0x20u;
    t8 = cow_cdecl(g, COW_IMG(0x10027310u), 2, sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, arg3);
    g->esp = sp0 - 0x34u;
    t9 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, arg3, sp0 - 0x20u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return (t9 & 0xffffff00u) | 1u;
L_1002c4b2: ;
    if ((rd8(self + 0x30u) & 0x10u) == 0u)
    {
        eax = in_eax;
        goto L_1002c4c5;
    }
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t10 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self, 0);
    t11 = g->edx;
    if (rd32(t10) != 0u)
    {
        eax = t10;
        ecx = rd32(t10);
        edx = t11;
        goto L_1002c4d0;
    }
    eax = t10;
L_1002c4c5: ;
    return eax & 0xffffff00u;
L_1002c4d0: ;
L_1002c4d4: ;
    if (edx == arg1)
    {
        edx = edx + 1u;
        goto L_1002c4e5;
    }
    edx = edx + 1u;
    if (rd32(ecx + 4u) != 0u)
    {
        eax = ecx + 4u;
        ecx = rd32(ecx + 4u);
        goto L_1002c4d4;
    }
    eax = ecx + 4u;
L_1002c4e5: ;
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t12 = cow_thiscall(g, COW_IMG(0x1002a750u), rd32(eax), 2, arg2, arg3);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return (t12 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002c400(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
