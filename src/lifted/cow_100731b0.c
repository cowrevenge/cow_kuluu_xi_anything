/* f_0x100731b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100731b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg2);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10074280u), 1, arg2);
    t1 = g->edx;
    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = t1;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100731f5;
    }
    eax = rd32(COW_IMG(0x1047cf84u));
    if (rd32(rd32(eax) + 0x14u) == 0u)
    {
        edx = rd32(rd32(eax) + 0x14u);
        eax = rd32(eax);
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100731f5;
    }
    edx = rd32(rd32(eax) + 0x14u);
    eax = rd32(eax);
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_100731d8: ;
    g->eax = eax;
    g->edx = edx;
    t2 = rd32(edx);
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, COW_IMG(0x10072270u), t2, 0);
    t4 = g->edx;
    if (t3 != t2)
    {
        eax = t3;
        esi = t2;
        goto L_100731ee;
    }
    eax = t3;
    edx = t4;
    esi = t2;
    if (rd32(esi + 0x34u) == arg2) goto L_10073287;
L_100731ee: ;
    if (rd32(esi + 0x10u) != 0u)
    {
        edx = rd32(esi + 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_100731d8;
    }
    edx = rd32(esi + 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_100731f5: ;
    wr32(sp0 - 0x1cu, arg2);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x101c4af0u), t5, 1, arg2);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0) goto L_100732a9;
    eax = t6;
    ecx = t7;
    edx = t8;
    edi = t6;
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t10 = g->edx;
    if (t9 == 0u) goto L_100732a9;
    eax = t9;
    edx = t10;
    esi = t9;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, arg2);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x18u;
    t12 = cow_thiscall(g, COW_IMG(0x101c4740u), t11, 4, arg2, esi, edi, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100732a0;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t15 = cow_thiscall(g, COW_IMG(0x1005e110u), sp0 - 0x1cu, 1, 0u);
    t16 = g->edx;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, COW_IMG(0x10073430u), self, 3, sp0 - 8u, esi, rd32(sp0 - 0x1cu));
    wr32(sp0 - 0x1cu, rd32(t17));
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = rd32(t17);
    t18 = rd32(t17);
    t19 = cow_thiscall(g, COW_IMG(0x10052870u), sp0 + 8u, 2, sp0 - 4u, t18);
    t20 = g->ecx;
    t21 = g->edx;
    if (rd32(t19) == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_100732a0;
    }
    eax = t19;
    edx = t21;
    wr32(sp0 - 0x1cu, arg2);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t22 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    wr32(t22 + 0x34u, arg2);
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t23, t24, 1, 1, esi);
    wr32(arg1, arg2);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return arg1;
L_10073287: ;
    wr8(rd32(edx) + 0x19u, rd8(rd32(edx) + 0x19u) | 0x80u);
    wr32(arg1, edx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return arg1;
L_100732a0: ;
    wr32(sp0 - 0x1cu, esi);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
L_100732a9: ;
    t25 = rd32(sp0 - 0x10u);
    t26 = rd32(sp0 - 0x14u);
    t27 = rd32(sp0 - 0x18u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t26;
    g->edi = t27;
    g->ebp = t25;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100731b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100731b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
