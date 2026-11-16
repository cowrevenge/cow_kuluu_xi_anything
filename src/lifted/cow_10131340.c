/* f_0x10131340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10131340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 0x10u) == 0u)
    {
        eax = rd32(self + 0x10u);
        goto L_101313f4;
    }
    eax = rd32(self + 0x10u);
    zf = rd32(self + 0x10u) == 0u;
    sf = (int32_t)rd32(self + 0x10u) < 0;
    if (zf || sf) goto L_10131435;
    if ((int32_t)eax > 2) goto L_10131435;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10130fd0u), sp0 - 4u, 0);
    t1 = g->edx;
    if (rd32(self + 0x14u) != 0u)
    {
        edx = t1;
        edi = rd32(self + 0x14u);
    }
    else
    {
        edx = t1;
        edi = sp0 - 4u;
    }
    wr32(sp0 - 0x14u, arg1);
    g->eax = rd32(edi);
    t2 = rd32(edi);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, rd32(t2 + 8u), edi, 1, arg1);
    if (rd32(self + 0x10u) != 2u)
    {
        eax = t3;
        ecx = rd32(self + 0x10u);
        edx = rd32(edi);
        goto L_101313b5;
    }
    eax = t3;
    edx = rd32(edi);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    t4 = (arg2 & 0xffff0000u) | rd16(self + 6u);
    wr32(sp0 - 0x1cu, t4);
    t5 = ((t4 & 0xffff0000u) | (uint16_t)(rd16(self + 0xcu) + rd16(self + 4u))) - eax;
    wr32(sp0 - 0x20u, t5);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, rd32(edx + 4u), edi, 4, t5, t4, arg1, arg2);
    t7 = g->edx;
    cow_thiscall(g, COW_IMG(0x10130fc0u), sp0 - 4u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_101313b5: ;
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    t8 = (arg1 & 0xffff0000u) | rd16(self + 6u);
    wr32(sp0 - 0x20u, t8);
    t9 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 4u) + (uint32_t)(int16_t)(rd16(self + 0xcu) + rd16(self + 4u)) - (uint16_t)eax) >> 1u);
    wr32(sp0 - 0x24u, t9);
    g->eax = (uint32_t)(int16_t)rd16(self + 4u);
    g->edx = edx;
    t10 = rd16(self + 4u);
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, rd32(edx + 4u), edi, 4, t9, t8, arg1, arg2);
    t12 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10130fc0u), sp0 - 4u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_101313f4: ;
    if (rd32(self + 0x14u) == 0u) goto L_10131419;
    ecx = rd32(self + 0x14u);
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, arg1);
    t13 = (arg1 & 0xffff0000u) | rd16(self + 6u);
    wr32(sp0 - 0x14u, t13);
    t14 = (t13 & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x18u, t14);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 4, t14, t13, arg1, arg2);
    return;
L_10131419: ;
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, arg1);
    t15 = (eax & 0xffff0000u) | rd16(self + 6u);
    wr32(sp0 - 0x14u, t15);
    t16 = (arg2 & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x18u, t16);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x101310a0u), t16, 4, t16, t15, arg1, arg2);
L_10131435: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10131340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
