/* f_0x10136fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10136fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_22c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 596u);

    wr32(sp0 - 0x230u, in_ebx);
    wr32(sp0 - 0x234u, in_ebp);
    wr32(sp0 - 0x238u, in_esi);
    wr32(sp0 - 0x23cu, in_edi);
    t1 = rd32(rd32(rd32(self + 0x64u) + 0x18u) + 0x10u);
    wr32(sp0 - 0x228u, t1);
    g->edx = t1;
    g->esp = sp0 - 0x23cu;
    cow_thiscall(g, COW_IMG(0x1012a360u), sp0 - 0x224u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, arg1);
    cow_fastcall(g, COW_IMG(0x1012a420u), sp0 - 0x224u, t2, 4, arg1, 1u, 0u, 0u);
    t3 = g->edx;
    wr32(sp0 - 0x22cu, 0u);
    edx = t3;
    loc_22c = 0u;
L_10137011: ;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t4 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x224u, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t6;
        goto L_101370cb;
    }
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0x240u, 0x150u);
    g->esp = sp0 - 0x234u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x150u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t8 = g->edx;
    if (t7 == 0u)
    {
        ebx = 0u;
    }
    else
    {
        eax = t7;
        edx = t8;
        t9 = rd32(self + 0x64u);
        wr32(sp0 - 0x240u, t9);
        g->esp = sp0 - 0x23cu;
        t10 = cow_thiscall(g, COW_IMG(0x10137580u), eax, 1, t9);
        ebx = t10;
    }
    esi = sp0 + 8u;
    edi = ebx + 0x104u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t11 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u);
    wr32(sp0 - 0x240u, t11);
    wr32(sp0 - 0x244u, 0x200u);
    wr32(sp0 - 0x248u, sp0 - 0x200u);
    g->ebx = ebx;
    g->esp = sp0 - 0x23cu;
    cow_thiscall(g, COW_IMG(0x1012a4f0u), sp0 - 0x224u, 3, sp0 - 0x200u, 0x200u, t11);
    t12 = g->ecx;
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x248u, 0x80u);
    wr32(sp0 - 0x24cu, ebx + 4u);
    wr32(sp0 - 0x250u, sp0 - 0x200u);
    t13 = cow_cdecl(g, COW_IMG(0x101284f0u), 5, sp0 - 0x200u, ebx + 4u, 0x80u, 0u, 0u);
    t14 = rd32(sp0 - 0x228u);
    t15 = rd32(sp0 - 0x22cu);
    wr16(ebx + 0x114u, (uint16_t)t13);
    wr32(sp0 - 0x240u, ebx);
    wr32(ebx + 0x110u, t14 + t15);
    g->edx = t14 + t15;
    cow_thiscall(g, COW_IMG(0x10126480u), self + 0x14u, 1, ebx);
    t16 = g->edx;
    if (rd8(arg1) == 0u)
    {
        eax = arg1;
        edx = t16;
        goto L_101370cb;
    }
    edx = t16;
    esi = t15;
    wr32(sp0 - 0x22cu, esi + 1u);
    if ((int32_t)(esi + 1u) < 64)
    {
        loc_22c = esi + 1u;
        goto L_10137011;
    }
    eax = arg1;
L_101370cb: ;
    wr32(self + 0x50u, arg5);
    g->esp = sp0 - 0x23cu;
    cow_fastcall(g, COW_IMG(0x1012a350u), sp0 - 0x224u, edx, 0);
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10136fd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 64u);
}
/* COW_ADAPTER END */
