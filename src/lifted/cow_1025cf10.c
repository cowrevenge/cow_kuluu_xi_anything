/* f_0x1025cf10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1025cf10(Guest* g)
{
    double d32;
    double d34;
    double d36;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d49;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_38;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x34u, self);
    t1 = ((rd32(rd32(sp0 + 0x10u) + 0xcu) << 8u | rd32(rd32(sp0 + 0x10u))) << 8u | rd32(rd32(sp0 + 0x10u) + 4u)) << 8u | rd32(rd32(sp0 + 0x10u) + 8u);
    t2 = rd32(sp0 + 0xcu);
    t3 = rd16(rd32(sp0 + 0xcu));
    wr32(sp0 + 0x10u, t1);
    if ((uint16_t)t3 == 0u)
    {
        edx = t1;
        ebx = in_ebx;
    }
    else
    {
        eax = t2;
        edx = t1;
        wr32(sp0 - 0x48u, in_ebx);
        wr32(sp0 + 0xcu, eax);
        wr32(sp0 - 0x38u, eax);
        ebx = in_ebx;
        loc_38 = eax;
L_1025cf5b: ;
        if ((int32_t)(rd32(rd32(self + 8u) + 0x38u) * rd32(rd32(self + 8u) + 0x38u)) <= 0)
        {
            eax = rd32(rd32(self + 8u) + 0x38u) * rd32(rd32(self + 8u) + 0x38u);
            ebx = (ebx & 0xffff0000u) | rd16(rd32(sp0 + 0xcu));
            esi = rd32(self + 8u);
            goto L_1025cf8f;
        }
        eax = rd32(rd32(self + 8u) + 0x38u) * rd32(rd32(self + 8u) + 0x38u);
        ebx = (ebx & 0xffff0000u) | rd16(rd32(sp0 + 0xcu));
        esi = rd32(self + 8u);
        ecx = rd32(esi + 0x44u) + 8u;
        ebp = 0u;
L_1025cf77: ;
        if ((uint16_t)ebx == rd16(ecx)) goto L_1025cf86;
        if ((int32_t)(ebp + 1u) < (int32_t)eax)
        {
            ecx = ecx + 0x24u;
            ebp = ebp + 1u;
            goto L_1025cf77;
        }
L_1025cf8f: ;
        if ((int32_t)eax <= 0) goto L_1025cfb0;
        ecx = rd32(esi + 0x44u) + 8u;
        ebp = 0u;
L_1025cf9b: ;
        if (rd16(ecx) == 0u) goto L_1025cfab;
        if ((int32_t)(ebp + 1u) < (int32_t)eax)
        {
            ecx = ecx + 0x24u;
            ebp = ebp + 1u;
            goto L_1025cf9b;
        }
L_1025cfb0: ;
        g->esp = sp0 - 0x48u;
        t4 = cow_call_regs(g, COW_IMG(0x1025d650u), eax, esi, g->edx, 1, 0);
        eax = t4;
        ebp = t4;
L_1025cfb9: ;
        if ((int32_t)ebp < 0) goto L_1025d0de;
        wr16(ebp * 0x24u + rd32(esi + 0x44u) + 8u, (uint16_t)ebx);
        t5 = ebp * 0x24u + rd32(esi + 0x44u) + 0xau;
        wr32(sp0 - 0x4cu, t5);
        wr32(sp0 - 0x50u, ebx);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, rd32(rd32(rd32(esi + 0x2cu)) + 0x18u), rd32(esi + 0x2cu), 2, ebx, t5);
        t6 = rd32(esi + 0x30u);
        wr32(sp0 - 0x4cu, t6);
        wr32(sp0 - 0x50u, ebx);
        g->edx = rd32(rd32(esi + 0x2cu));
        t7 = rd32(rd32(esi + 0x2cu));
        cow_thiscall(g, rd32(t7 + 0x1cu), rd32(esi + 0x2cu), 2, ebx, t6);
        t8 = g->edx;
        t9 = rd32(esi + 0x44u);
        wr16(ebp * 0x24u + t9 + 0x18u, (uint16_t)(rd16(esi + 0x34u) * rd16(ebp * 0x24u + t9)));
        t10 = rd16(ebp * 0x24u + rd32(esi + 0x44u) + 4u);
        t11 = rd16(esi + 0x34u);
        wr16(ebp * 0x24u + rd32(esi + 0x44u) + 0x1au, (uint16_t)(t10 * t11));
        t12 = rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xcu);
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x13u, (uint8_t)t12);
        t13 = rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xdu);
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x14u, (uint8_t)t13);
        t14 = rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xeu);
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x15u, (uint8_t)t14);
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x16u, rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xfu));
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x11u, (uint8_t)(rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xau) + (uint8_t)(uint32_t)((int32_t)((uint32_t)(int8_t)rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xcu) - (uint32_t)((int32_t)(uint32_t)(int8_t)rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xcu) >> 0x1fu)) >> 1u)));
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x12u, (uint8_t)(rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xbu) + (uint8_t)(uint32_t)((int32_t)((uint32_t)(int8_t)rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xdu) - (uint32_t)((int32_t)(uint32_t)(int8_t)rd8(ebp * 0x24u + rd32(esi + 0x44u) + 0xdu) >> 0x1fu)) >> 1u)));
        wr8(ebp * 0x24u + rd32(esi + 0x44u) + 0x20u, 1u);
        t15 = rd32(esi + 0x30u);
        wr32(sp0 - 0x4cu, t15);
        t16 = ebp * 0x24u + rd32(esi + 0x44u) + 0xau;
        wr32(sp0 - 0x50u, t16);
        t17 = rd16(ebp * 0x24u + rd32(esi + 0x44u) + 0x1au);
        wr32(sp0 - 0x54u, t17);
        t18 = rd16(ebp * 0x24u + rd32(esi + 0x44u) + 0x18u);
        wr32(sp0 - 0x58u, t18);
        g->ebp = ebp;
        cow_thiscall(g, COW_IMG(0x1025d690u), esi, 4, t18, t17, t16, t15);
        t19 = rd32(sp0 + 0x10u);
        wr8(esi + 0x40u, 1u);
        edx = t19;
L_1025d0ae: ;
        t20 = rd32(ebp * 0x24u + rd32(esi + 0x44u) + 0x10u);
        wr32(sp0 - 0x30u, t20);
        t21 = rd32(ebp * 0x24u + rd32(esi + 0x44u) + 0x14u);
        wr32(sp0 - 0x2cu, t21);
        t22 = rd32(ebp * 0x24u + rd32(esi + 0x44u) + 0x18u);
        wr32(sp0 - 0x28u, t22);
        t23 = rd32(esi + 0x4cu);
        wr32(ebp * 0x24u + rd32(esi + 0x44u) + 0x1cu, t23);
        loc_30 = t20;
        loc_2c = t21;
        loc_28 = t22;
L_1025d10c: ;
        t31 = rd32(sp0 - 0x26u);
        wr32(sp0 + 0xcu, (uint16_t)loc_28);
        d32 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
        wrf32(sp0 - 0x20u, (float)d32);
        t33 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, (uint16_t)t31);
        wr32(sp0 - 0x4cu, edx);
        d34 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
        wrf32(sp0 - 0x1cu, (float)d34);
        t35 = (uint32_t)(int8_t)(loc_30 >> 0x18u);
        wr32(sp0 + 0xcu, t35);
        d36 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
        wrf32(sp0 - 0x18u, (float)d36);
        wr32(sp0 + 0xcu, (uint32_t)(int8_t)loc_2c);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        t37 = t33 - (uint32_t)(int8_t)(loc_30 >> 8u);
        t38 = rd32(sp0 + 0xcu);
        wr32(sp0 + 4u, t37);
        wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t38);
        t39 = arg2 - (uint32_t)(int8_t)(loc_30 >> 0x10u);
        d40 = fr(g, (double)(int32_t)rd32(sp0 + 4u) + d36);
        d41 = fr(g, d36 * (double)rdf32(self + 0xcu));
        wr32(sp0 + 4u, t39);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        d42 = (double)(float)fr(g, d40 - d41);
        wrf32(sp0 - 0x10u, (float)d42);
        d43 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) + (double)(float)(double)(int32_t)t38) - fr(g, (double)(float)(double)(int32_t)t38 * (double)rdf32(self + 0xcu)));
        wrf32(sp0 - 0xcu, (float)d43);
        wrf32(sp0 - 8u, (float)(double)(float)d41);
        d44 = (double)(float)fr(g, (double)(float)(double)(int32_t)t38 * (double)rdf32(self + 0xcu));
        wrf32(sp0 - 4u, (float)d44);
        g->edx = sp0 - 0x10u;
        t45 = rd32(self + 8u);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, rd32(rd32(t45) + 0x18u), t45, 3, sp0 - 0x10u, sp0 - 0x20u, edx);
        t46 = g->ecx;
        t47 = g->edx;
        t48 = (uint32_t)(int8_t)rd8(sp0 - 0x2bu);
        wr32(sp0 + 4u, t48);
        g->edx = t47;
        d49 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(self + 0xcu));
        fpush(g, d49);
        t50 = cow_call_regs(g, COW_IMG(0x10311c6cu), t48, g->ecx, g->edx, 1, 0);
        t51 = g->edx;
        t52 = rd32(sp0 - 0x38u);
        wr32(sp0 + 4u, t33 + t50);
        wr32(sp0 - 0x38u, t52 + 2u);
        wr32(sp0 + 0xcu, t52 + 2u);
        if (rd16(t52 + 2u) != 0u)
        {
            loc_38 = t52 + 2u;
            goto L_1025cf57;
        }
        edx = t51;
        ebx = rd32(sp0 - 0x48u);
    }
    g->ebx = ebx;
    g->ebp = in_ebp;
    g->edx = edx;
    return rd32(sp0 + 4u);
L_1025cf57: ;
    edx = rd32(sp0 + 0x10u);
    goto L_1025cf5b;
L_1025cf86: ;
    if (ebp != 0xffffffffu) goto L_1025d0ae;
    goto L_1025cf8f;
L_1025cfab: ;
    if (ebp != 0xffffffffu) goto L_1025cfb9;
    goto L_1025cfb0;
L_1025d0de: ;
    g->edx = rd32(self);
    t24 = rd32(self);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, rd32(t24 + 0x28u), self, 0);
    t25 = g->edx;
    g->eax = rd32(self);
    t26 = rd32(self);
    t27 = cow_thiscall(g, rd32(t26 + 0x2cu), self, 0);
    g->edx = rd32(self);
    t28 = rd32(self);
    cow_thiscall(g, rd32(t28 + 0x24u), self, 0);
    t29 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x30u);
    t30 = (t29 & 0xffff0000u) | rd16(rd32(sp0 + 0xcu));
    wr32(sp0 - 0x50u, t30);
    cow_thiscall(g, COW_IMG(0x1025d3d0u), rd32(self + 8u), 2, t30, sp0 - 0x30u);
    edx = rd32(sp0 + 0x10u);
    goto L_1025d10c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cf10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025cf10(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
