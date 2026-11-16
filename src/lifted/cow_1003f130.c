/* f_0x1003f130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003f130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;

    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x104u);
        t1 = rd32(eax) + 0x30u;
        if (rd8(self + 0x1dcu) != 0u)
        {
            esi = t1;
            loc_10 = t1;
        }
        else
        {
            esi = t1;
            loc_10 = t1;
            wr8(self + 0x1dcu, 1u);
            t2 = (uint32_t)(int8_t)rd8(esi + 5u) * 0x30u;
            g->esp = sp0 - 0x20u;
            t3 = cow_call_regs(g, COW_IMG(0x10028640u), t2, self, in_edx, 1, 2, t2, 4u);
            wr32(self + 0x22du, t3);
            t4 = (uint32_t)(int16_t)rd16(self + 0x1d8u) * 4u - 2u;
            t5 = rd16(self + 0x1d8u);
            wr32(self + 0x225u, t4);
            t6 = (uint32_t)(int16_t)t5 * 6u;
            wr32(self + 0x229u, t6);
            t7 = (uint32_t)(int16_t)rd16(esi + 2u) * t6;
            g->ebp = self;
            g->eax = t6;
            g->edx = t7;
            t8 = cow_thiscall(g, COW_IMG(0x10043e50u), self + 0x1ddu, 3, t7, 0x152u, 0u);
            t9 = g->edx;
            g->edx = t9;
            cow_stdcall(g, COW_IMG(0x10044070u), 0);
            t10 = g->edx;
            g->edx = t10;
            t11 = cow_thiscall(g, COW_IMG(0x100440f0u), self + 0x1ddu, 0);
            t12 = g->edx;
            if (t11 == 0u)
            {
                eax = t11;
                edx = t12;
            }
            else
            {
                eax = t11;
                if ((int16_t)rd16(esi + 2u) <= 0)
                {
                    edx = esi + 0x18u;
                }
                else
                {
                    edx = esi + 0x18u;
                    loc_8 = 0u;
                    loc_4 = 0u;
L_1003f1e7: ;
                    if ((int16_t)rd16(self + 0x1d8u) <= 0) goto L_1003f254;
                    loc_c = 0u;
L_1003f1f9: ;
                    ecx = 0u;
L_1003f1fb: ;
                    t13 = rd32(edx + (uint32_t)(int8_t)rd8(COW_IMG(0x10352218u) + ecx) * 0x18u + 0x10u);
                    wr32(eax + 0x18u, t13);
                    t14 = rd32(edx + (uint32_t)(int8_t)rd8(COW_IMG(0x10352217u) + ecx + 1u) * 0x18u + 0x14u);
                    wr32(eax + 0x1cu, t14);
                    t15 = rd32(edx + (uint32_t)(int8_t)rd8(COW_IMG(0x10352217u) + ecx + 1u) * 0x18u + 0x18u);
                    wr32(eax + 0x10u, 0u);
                    wr32(eax + 0x20u, t15);
                    wr32(eax + 0xcu, 0u);
                    wr32(eax + 0x14u, 0xbf800000u);
                    if ((int32_t)(ecx + 1u) < 6)
                    {
                        eax = eax + 0x24u;
                        ecx = ecx + 1u;
                        goto L_1003f1fb;
                    }
                    eax = eax + 0x24u;
                    if ((int32_t)(loc_c + 1u) < (int16_t)rd16(self + 0x1d8u))
                    {
                        loc_c = loc_c + 1u;
                        goto L_1003f1f9;
                    }
L_1003f254: ;
                    ecx = 0u;
                    edi = loc_4;
                    loc_c = loc_4;
L_1003f25e: ;
                    t16 = rd32(edx + (uint32_t)(int8_t)rd8(COW_IMG(0x10352219u) + ecx) * 0x18u + 4u);
                    t17 = rd32(self + 0x22du);
                    t18 = rd8(COW_IMG(0x10352219u) + ecx);
                    wr32(edi + t17, t16);
                    t19 = rd32(edx + (uint32_t)(int8_t)t18 * 0x18u + 8u);
                    wr32(edi + t17 + 4u, t19);
                    t20 = rd32(edx + (uint32_t)(int8_t)t18 * 0x18u + 0xcu);
                    wr32(edi + t17 + 8u, t20);
                    if ((int32_t)(ecx + 1u) < 4)
                    {
                        ecx = ecx + 1u;
                        edi = loc_c + 0xcu;
                        loc_c = loc_c + 0xcu;
                        goto L_1003f25e;
                    }
                    edi = loc_c + 0xcu;
                    if ((int32_t)(loc_8 + 1u) < (int16_t)rd16(loc_10 + 2u))
                    {
                        edx = edx + rd8(edx + 2u) * 0x90u + 4u;
                        loc_8 = loc_8 + 1u;
                        loc_4 = edi;
                        goto L_1003f1e7;
                    }
                    edx = edx + rd8(edx + 2u) * 0x90u + 4u;
                    esi = loc_10;
                }
            }
            g->esp = sp0 - 0x20u;
            cow_stdcall(g, COW_IMG(0x100441a0u), 0);
        }
        t21 = rd32(self + 0x148u);
        t22 = rd32(self + 0x144u);
        t23 = rd32(self + 0x140u);
        g->ebx = 0u;
        g->edx = t21;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10075700u), t22, esi + 8u, g->edx, 0, 4, 0u, t23, t22, t21);
        t24 = g->edx;
        t25 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t26 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t25);
        g->edx = t24;
        t27 = rd32(COW_IMG(0x1047cf7cu));
        t28 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t29 = g->edx;
        if (t28 == 0u)
        {
            eax = t28;
            edx = t29;
            edi = t26;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x100746a0u), edi, 0);
        }
        else
        {
            edx = t29;
            edi = t26;
            loc_4 = t26;
            g->esp = sp0 - 0x20u;
            t30 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            esi = t30;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            esi = loc_10;
            edi = loc_4;
        }
        wr32(edi + 0x30u, 0u);
        wr32(edi + 0x34u, 0u);
        wr32(edi + 0x38u, 0u);
        wr32(edi + 0x3cu, 0x3f800000u);
        wr32(COW_IMG(0x1047bf34u), edi);
        if ((int32_t)rd16(self + 0x170u) < (int16_t)rd16(esi + 2u))
        {
            edx = (uint32_t)(int16_t)rd16(esi + 2u);
        }
        else
        {
            edx = (uint32_t)(int16_t)rd16(esi + 2u);
            wr16(self + 0x170u, 0u);
        }
        t31 = rd32(self + 0x229u);
        t32 = rd16(self + 0x170u) * rd32(self + 0x229u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t33 = cow_stdcall(g, COW_IMG(0x100440a0u), 2, t32, t31);
        t34 = g->edx;
        wr32(COW_IMG(0x1047b9d4u), t33);
        g->edx = t34;
        t35 = cow_call_regs(g, COW_IMG(0x10063c80u), t33, self + 0x194u, g->edx, 0, 2, COW_IMG(0x1003efc0u), self);
        t36 = g->edx;
        g->ecx = self + 0x1ddu;
        cow_stdcall(g, COW_IMG(0x100441a0u), 0);
        t37 = g->ecx;
        t38 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = rd32(t38);
        t39 = rd32(t38);
        cow_thiscall(g, rd32(t39 + 0xc8u), t37, 3, t38, 0xeu, 0u);
        t40 = g->edx;
        if (t35 == 0u)
        {
            edx = t40;
        }
        else
        {
            edx = t40;
            loc_4 = t35;
            g->esp = sp0 - 0x20u;
            cow_fastcall(g, COW_IMG(0x1003e9a0u), self, edx, 0);
            t41 = g->edx;
            t42 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
            g->eax = t42;
            t43 = cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t42);
            t44 = loc_4 * 4u - 2u;
            g->edx = t44;
            cow_thiscall(g, COW_IMG(0x10043f40u), self + 0x1ddu, 5, 1u, t44, 5u, 0u, 0xffffffffu);
            t45 = g->edx;
            edx = t45;
        }
        t46 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t47 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t47 + 0xa90u, t46);
        wr32(t46 * 4u + t47 + 0xa10u, edi);
        eax = t47;
    }
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003f130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003f130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
