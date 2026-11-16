/* f_0x1018e8d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018e8d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 296u);

    wr32(sp0 - 0x104u, in_esi);
    if (rd8(self + 0x54u) >= 0x14u)
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x54u);
        goto L_1018e92c;
    }
    ecx = (self & 0xffffff00u) | rd8(self + 0x54u);
    t1 = cow_divu(g, (uint8_t)ecx + rd32(self + 0x58u), 0x14u);
    t2 = cow_modu(g, (uint8_t)ecx + rd32(self + 0x58u), 0x14u);
    wr32(sp0 - 0x108u, t2);
    t3 = rd32(self + 0x5cu);
    wr32(sp0 - 0x10cu, t3);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = t3;
    g->esp = sp0 - 0x104u;
    t4 = cow_cdecl(g, COW_IMG(0x1018e170u), 3, sp0 - 0x100u, t3, t2);
    t5 = g->edx;
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1018e310u), arg1, 1, sp0 - 0x100u);
    t7 = g->edx;
    wr8(self + 0x54u, (uint8_t)(rd8(self + 0x54u) + 1u));
    g->edx = t7;
    return 0u;
L_1018e92c: ;
    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_edi);
    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        ebx = rd32(self + 4u);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10cu;
        t8 = cow_thiscall(g, COW_IMG(0x1018e0e0u), ebx, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x110u, ebx);
        g->ecx = t9;
        t11 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
        t12 = g->ecx;
        eax = t11;
        ecx = t12;
    }
    wr32(sp0 - 0x110u, 0x4cu);
    wr32(sp0 - 0x114u, self + 8u);
    wr32(sp0 - 0x118u, self + 4u);
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10314a10u), 5, self + 4u, self + 8u, 0x4cu, in_edi, in_ebx);
    t13 = rd32(self + 0x58u) + 1u;
    wr32(self + 0x50u, 0u);
    wr32(self + 0x58u, t13);
    t14 = cow_divu(g, t13 + 0x13u, 0x14u);
    t15 = cow_modu(g, t13 + 0x13u, 0x14u);
    wr32(sp0 - 0x11cu, t15);
    t16 = rd32(self + 0x5cu);
    wr32(sp0 - 0x120u, t16);
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = t16;
    g->esp = sp0 - 0x118u;
    t17 = cow_cdecl(g, COW_IMG(0x1018e170u), 3, sp0 - 0x100u, t16, t15);
    t18 = g->edx;
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->edx = t18;
    g->esp = sp0 - 0x10cu;
    cow_thiscall(g, COW_IMG(0x1018e310u), arg1, 1, sp0 - 0x100u);
    t19 = g->edx;
    g->edx = t19;
    return 0x32u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018e8d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
