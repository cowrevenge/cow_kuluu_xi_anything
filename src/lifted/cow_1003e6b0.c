/* f_0x1003e6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003e6b0(Guest* g)
{
    double d17;
    double d21;
    double d34;
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    uint32_t t35;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_esi);
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x1003e8d0u), 0);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, self);
    t1 = rd32(self + 0x44u);
    wr32(sp0 - 4u, t1);
    g->ebx = rd32(self + 0x3cu);
    g->eax = self + 0x38u;
    g->edx = t1;
    t2 = rd32(self + 0x3cu);
    t3 = rd32(self + 0x40u);
    t4 = rd32(self + 0x38u);
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x10075520u), self + 0x38u, 1, self);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x30u, 4u);
    if (rd8(self + 0x34u) == 0u)
    {
        eax = (t5 & 0xffffff00u) | rd8(self + 0x34u);
        ecx = t6;
        goto L_1003e717;
    }
    eax = (t5 & 0xffffff00u) | rd8(self + 0x34u);
    ecx = t6;
    edx = t7;
    ebx = t2;
    ebp = t3;
    edi = t4;
    wr32(sp0 - 0x34u, 0x10u);
    g->esp = sp0 - 0x2cu;
    t8 = cow_call_regs(g, COW_IMG(0x10028640u), eax, ecx, edx, 1, 2, 0x10u, 4u);
    t9 = g->edx;
    t10 = rd32(sp0 - 4u);
    wr32(self + 0x44u, t8);
    wr32(t8, edi);
    wr32(t8 + 4u, ebx);
    wr32(t8 + 8u, ebp);
    wr32(t8 + 0xcu, t10);
    wr32(self + 0x3cu, 0u);
    eax = t8;
    edx = t9;
L_1003e70f: ;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
L_1003e717: ;
    t11 = (uint32_t)(int16_t)rd16(self + 0x32u) << 2u;
    wr32(sp0 - 0x34u, t11);
    g->esp = sp0 - 0x2cu;
    t12 = cow_call_regs(g, COW_IMG(0x10028640u), eax, ecx, t11, 1, 2, t11, 4u);
    t13 = g->edx;
    t14 = rd16(self + 0x32u);
    wr32(self + 0x44u, t12);
    if ((int16_t)t14 <= 0)
    {
        eax = t12;
        ecx = t12;
        edx = t13;
        ebx = 0u;
        goto L_1003e767;
    }
    eax = t12;
    ecx = t12;
    ebx = 0u;
    ebp = 0u;
    edi = self + 0x48u;
L_1003e739: ;
    wr16(ecx + 2u, (uint16_t)ebx);
    wr16(ecx, rd8(edi + 2u));
    if ((int32_t)(ebp + 1u) < (int16_t)rd16(self + 0x32u))
    {
        eax = rd8(edi + 2u) * 0x90u;
        ecx = ecx + 4u;
        ebx = ebx + rd8(edi + 2u) * 6u;
        ebp = ebp + 1u;
        edi = edi + rd8(edi + 2u) * 0x90u + 4u;
        goto L_1003e739;
    }
    eax = rd8(edi + 2u) * 0x90u;
    ecx = ecx + 4u;
    edx = (uint32_t)(int16_t)rd16(self + 0x32u);
    ebx = ebx + rd8(edi + 2u) * 6u;
L_1003e767: ;
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    if ((int16_t)rd16(self + 0x30u) >= 1)
    {
        if (rd8(self + 0x37u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x37u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x37u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t15 = cow_thiscall(g, COW_IMG(0x10075fb0u), self + 0x38u, 0);
            t16 = g->edx;
            wr32(sp0 - 0x10u, t15);
            wr32(sp0 - 0xcu, 0u);
            d17 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int64_t)cow_i64(t15, 0u));
            wrf32(sp0 - 0x1cu, (float)d17);
            g->edx = t16;
            t18 = cow_thiscall(g, COW_IMG(0x10075fd0u), self + 0x38u, 0);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(sp0 - 0x10u, t18);
            wr32(sp0 - 0xcu, 0u);
            d21 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int64_t)cow_i64(t18, 0u));
            wrf32(sp0 - 0x18u, (float)d21);
            eax = t18;
            ecx = t19;
            edx = t20;
        }
    }
    wr32(sp0 - 0x30u, 0x48u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t22 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        edx = t23;
        goto L_1003e70f;
    }
    eax = t22;
    edx = t23;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t24 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
    t25 = g->edx;
    wr32(sp0 - 0x10u, t24);
    if (t24 == 0u)
    {
        eax = t24;
        edx = t25;
        goto L_1003e70f;
    }
    eax = t24;
    edx = t25;
    edi = t24;
    loc_10 = t24;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x152u);
    wr32(sp0 - 0x38u, ebx);
    g->ebp = self + 0x48u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t26 = cow_thiscall(g, COW_IMG(0x10043e50u), edi, 3, ebx, 0x152u, 0u);
    t27 = g->edx;
    wr32(sp0 - 0x30u, ebx);
    g->edx = t27;
    t28 = cow_stdcall(g, COW_IMG(0x10044010u), 1, ebx);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10044130u), edi, 0);
    t31 = g->edx;
    if (t30 == 0u)
    {
        eax = t30;
        edx = t31;
        goto L_1003e8ba;
    }
    eax = t30;
    edx = t31;
    wr32(sp0 - 0x14u, 0u);
    if ((int16_t)rd16(self + 0x32u) > 0)
    {
        ebp = self + 0x48u;
        loc_14 = 0u;
L_1003e829: ;
        if ((int32_t)(rd8(ebp + 2u) * 6u) > 0)
        {
            ecx = ebp + 8u;
            edi = 0u;
L_1003e83c: ;
            t32 = rd32(ecx + 8u);
            wr32(eax + 0x18u, t32);
            t33 = rd32(ecx - 4u);
            d34 = (double)rdf32(sp0 - 0x1cu);
            wr32(eax, t33);
            wr32(eax + 4u, rd32(ecx));
            t35 = rd32(ecx + 4u);
            wr32(eax + 8u, t35);
            d36 = fr(g, d34 * (double)rdf32(ecx + 0xcu));
            wrf32(eax + 0x1cu, (float)d36);
            d37 = fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(ecx + 0x10u));
            wr32(eax + 0xcu, 0u);
            wr32(eax + 0x10u, 0u);
            wr32(eax + 0x14u, 0x3f800000u);
            wrf32(eax + 0x20u, (float)d37);
            if ((int32_t)(edi + 1u) < (int32_t)(rd8(ebp + 2u) * 6u))
            {
                eax = eax + 0x24u;
                ecx = ecx + 0x18u;
                edi = edi + 1u;
                goto L_1003e83c;
            }
            eax = eax + 0x24u;
        }
        wr32(sp0 - 0x14u, loc_14 + 1u);
        if ((int32_t)(loc_14 + 1u) < (int16_t)rd16(self + 0x32u))
        {
            ebp = ebp + rd8(ebp + 2u) * 0x90u + 4u;
            loc_14 = loc_14 + 1u;
            goto L_1003e829;
        }
        edx = (uint32_t)(int16_t)rd16(self + 0x32u);
        edi = rd32(sp0 - 0x10u);
    }
    wr32(self + 0x3cu, edi);
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100441a0u), eax, edi, edx);
L_1003e8ba: ;
    wr32(self + 0x3cu, 0u);
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100441a0u), eax, edi, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e6b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e6b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
