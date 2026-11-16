/* f_0x10268c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=14 */
uint32_t cow_fn_10268c80(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg12 = rd32(g->esp + 0x30u);
    const uint32_t arg14 = rd32(g->esp + 0x38u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327f2eu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x10u, self);
    g->esp = sp0 - 0x20u;
    cow_fastcall(g, COW_IMG(0x102659d0u), self, in_edx, 2, 0u, arg2);
    wr32(self + 0x10u, arg1);
    wr32(self + 0x14u, arg4);
    wr32(self + 0x24u, arg8);
    wr16(self + 0x28u, (uint16_t)arg9);
    wr32(self + 0x2cu, arg12);
    wr32(self + 0x30u, arg14);
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, arg11);
    wr32(sp0 - 0x2cu, arg10);
    wr32(sp0 - 4u, 0u);
    wr32(self + 0x20u, arg7);
    g->eax = arg10;
    t2 = cow_fastcall(g, COW_IMG(0x10268a00u), self + 0x34u, arg11, 3, arg10, arg11, arg3);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self + 0x48u, 0u);
    d5 = fr(g, rdf64(sp0 + 0x14u) * rdf64(COW_IMG(0x10340ad0u)));
    wr8(sp0 - 4u, 2u);
    wr32(self + 0x4cu, 0x80004004u);
    wr32(self, COW_IMG(0x10340af4u));
    wr32(self + 0xcu, COW_IMG(0x10340ad8u));
    g->edx = t4;
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    t8 = rd32(self + 0x20u);
    wr32(self + 0x18u, t6);
    t9 = rd32(self + 0x14u);
    wr32(self + 0x1cu, t7);
    wr32(sp0 - 0x24u, sp0 + 8u);
    wr32(sp0 - 0x28u, t8);
    wr32(sp0 - 0x2cu, t9);
    g->eax = t9;
    t10 = cow_thiscall(g, rd32(rd32(t9)), t8, 3, t9, t8, sp0 + 8u);
    t11 = g->ecx;
    if ((int32_t)t10 < 0)
    {
        eax = t10;
        goto L_10268d9b;
    }
    ecx = t11;
    wr32(sp0 - 0x24u, arg2);
    g->edx = rd32(arg2);
    t12 = rd32(arg2);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(t12 + 8u), ecx, 1, arg2);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x24u, sp0 + 0x10u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, arg7);
    wr32(sp0 - 0x34u, self + 0x48u);
    g->eax = sp0 + 0x10u;
    t15 = cow_fastcall(g, COW_IMG(0x10266bc0u), t13, t14, 5, self + 0x48u, arg7, 0u, 0u, sp0 + 0x10u);
    t16 = g->ecx;
    if ((int32_t)t15 < 0)
    {
        eax = t15;
        goto L_10268d9b;
    }
    ecx = t16;
    wr32(sp0 - 0x24u, arg4);
    g->edx = rd32(arg4);
    t17 = rd32(arg4);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(t17 + 8u), ecx, 1, arg4);
    t18 = g->edx;
    if ((uint16_t)arg9 != 4u)
    {
        edx = t18;
    }
    else
    {
        edx = t18;
        wr32(self + 0x40u, 1u);
        wr32(self + 0x38u, self + 0x44u);
        wr32(self + 0x44u, 0xfffffffdu);
    }
    wr32(sp0 - 0x24u, self);
    g->eax = rd32(arg1);
    t19 = rd32(arg1);
    g->esp = sp0 - 0x20u;
    t20 = cow_thiscall(g, rd32(t19 + 8u), arg1, 1, self);
    if ((int32_t)t20 >= 0) goto L_10268da1;
    eax = t20;
L_10268d9b: ;
    wr32(arg3, eax);
    loc_14 = in_ebx;
    loc_18 = in_ebp;
    loc_1c = in_esi;
    loc_20 = in_edi;
L_10268da1: ;
    t21 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t21);
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10268c80(g);
    g->esp = sp0;
    rt_return(g, r, 56u);
}
/* COW_ADAPTER END */
