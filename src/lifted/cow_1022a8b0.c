/* f_0x1022a8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022a8b0(Guest* g)
{
    double d26;
    double d27;
    double d28;
    double d29;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_esi);
    if (rd8(self + 0x88u) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
        goto L_1022a8ca;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t1 = cow_fastcall(g, COW_IMG(0x1022a810u), self, in_edx, 0);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1022a8ca: ;
    if ((uint8_t)eax != 2u) goto L_1022a8da;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t3 = cow_fastcall(g, COW_IMG(0x1022a860u), self, in_edx, 0);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1022a8da: ;
    wr32(sp0 - 0x20u, 0x60u);
    wr32(sp0 - 0x24u, 9u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x60u);
    t6 = g->edx;
    wr32(sp0 - 0xcu, t5);
    if (rd32(self + 0x90u) > 3u)
    {
        eax = rd32(self + 0x90u);
        edx = t6;
        goto L_1022aa1f;
    }
    eax = rd32(self + 0x90u);
    ecx = t5;
    edx = t6;
    loc_c = t5;
    t7 = rd32(COW_IMG(0x1022aa24u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1022a902u: goto L_1022a902;
    case 0x1022a918u: goto L_1022a918;
    case 0x1022a9e9u: goto L_1022a9e9;
    case 0x1022a9f2u: goto L_1022a9f2;
    default: rt_fatal(g, COW_IMG(0x1022a8fbu), "switch");
    }
    return 0;
L_1022a902: ;
    t30 = rd32(self + 8u) + 0xc4u;
    wr32(sp0 - 0x20u, t30);
    g->eax = t30;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t31 = cow_stdcall(g, COW_IMG(0x1022f5c0u), 0);
    t32 = g->edx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edx = t32;
    return t31;
L_1022a918: ;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    t16 = (uint32_t)(int16_t)rd16(self + 0x7cu);
    wr32(sp0 - 0x18u, t16);
    ebx = (uint32_t)(int16_t)rd16(self + 0x7eu);
    ebp = 0u;
    loc_18 = t16;
L_1022a93d: ;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t17 = cow_thiscall(g, COW_IMG(0x10221db0u), self, 0);
    t18 = g->edx;
    if ((int32_t)(ebp + t17) < 0)
    {
        edx = t18;
        goto L_1022a955;
    }
    eax = ebp + t17;
    edx = t18;
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_1022a955;
    eax = eax * 8u + rd32(self + 0x20u);
    edx = rd32(self + 0x20u);
L_1022a957: ;
    if (rd32(eax) == 0u) goto L_1022a9b7;
    ecx = rd32(eax);
    g->esp = sp0 - 0x28u;
    t19 = cow_thiscall(g, COW_IMG(0x102295c0u), ecx, 0);
    t20 = g->ecx;
    if ((int16_t)(ebx + ((t19 & 0xffff0000u) | rd16(t19 + 2u))) > (int16_t)rd16(self + 0x82u))
    {
        edx = rd32(sp0 - 0x18u);
        goto L_1022a9b7;
    }
    edx = rd32(sp0 - 0x18u);
    edi = t19;
    loc_14 = (uint16_t)rd32(sp0 - 0x18u) | (uint16_t)ebx << 0x10u;
    loc_10 = (uint16_t)(rd32(sp0 - 0x18u) + ((t20 & 0xffff0000u) | rd16(t19))) | (uint16_t)(ebx + ((t19 & 0xffff0000u) | rd16(t19 + 2u))) << 0x10u;
    t21 = ebp + rd32(self + 0x54u);
    wr32(sp0 - 0x2cu, t21);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118980u), rd32(self + 8u), 2, sp0 - 0x14u, t21);
    if ((int32_t)(ebp + 1u) <= 8)
    {
        edx = (uint32_t)(int16_t)rd16(edi + 2u);
        ebx = ebx + rd32(self + 0x84u) + (uint32_t)(int16_t)rd16(edi + 2u);
        ebp = ebp + 1u;
        goto L_1022a93d;
    }
    edx = (uint32_t)(int16_t)rd16(edi + 2u);
L_1022a9b7: ;
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
        ebx = rd32(sp0 - 0x20u);
        ebp = rd32(sp0 - 0x24u);
        edi = rd32(sp0 - 0x28u);
        goto L_1022a9dd;
    }
    ebx = rd32(sp0 - 0x20u);
    ebp = rd32(sp0 - 0x24u);
    edi = rd32(sp0 - 0x28u);
    ecx = rd32(sp0 - 0xcu);
L_1022a9c5: ;
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x28u, 0x14u);
    wr32(sp0 - 0x2cu, 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t22 = cow_stdcall(g, COW_IMG(0x101171b0u), 4, 0x14u, 0x14u, ecx, 0x80808080u);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_1022a9dd: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t24 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t25 = g->edx;
    d26 = cow_take_float(g);
    d27 = cow_take_float(g);
    d28 = cow_take_float(g);
    d29 = cow_take_float(g);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = edi;
    g->ebp = ebp;
    g->edx = t25;
    fpush(g, d26);
    fpush(g, d27);
    fpush(g, d28);
    fpush(g, d29);
    return t24;
L_1022a955: ;
    eax = 0u;
    goto L_1022a957;
L_1022a9e9: ;
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        goto L_1022a9dd;
    }
    ebx = in_ebx;
    ebp = in_ebp;
    edi = in_edi;
    goto L_1022a9c5;
L_1022a9f2: ;
    if (rd16(self + 0x8eu) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x8eu);
        goto L_1022aa18;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x8eu);
    wr32(sp0 - 0x20u, eax);
    g->esp = sp0 - 0x20u;
    t8 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 0);
    t9 = g->edx;
    g->esi = self;
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, COW_IMG(0x101544f0u), t8, 1, rd32(sp0 - 0x20u));
    t11 = g->edx;
    wr32(sp0 - 0x20u, t10);
    t12 = cow_call_regs(g, COW_IMG(0x1022a710u), t10, self, t11, 0, 1, t10);
    t13 = g->edx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edx = t13;
    return t12;
L_1022aa18: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x1022a6f0u), self, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_1022aa1f: ;
    g->esi = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022a8b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
