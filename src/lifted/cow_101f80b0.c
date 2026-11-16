/* f_0x101f80b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f80b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x24u, self);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        goto L_101f82a2;
    }
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x38u, t1);
    wr32(sp0 - 0x3cu, arg1);
    wr32(sp0 - 0x40u, COW_IMG(0x1038501cu));
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1038501cu), arg1, t1, in_edi);
    t3 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = t3;
    t4 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x34u;
    t5 = cow_thiscall(g, COW_IMG(0x101c4b60u), t4, 2, sp0 - 0x20u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 >= 0)
    {
        ecx = t6;
        edx = t7;
        ebp = t5;
        goto L_101f813b;
    }
    esi = t1;
    t8 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    wr32(sp0 - 0x38u, t8);
    wr32(sp0 - 0x3cu, esi);
    wr32(sp0 - 0x40u, arg1);
    wr32(sp0 - 0x44u, COW_IMG(0x10385008u));
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    g->esp = sp0 - 0x34u;
    t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10385008u), arg1, esi, t8);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    t10 = rd32(COW_IMG(0x10662dccu));
    t11 = cow_thiscall(g, COW_IMG(0x101c4b60u), t10, 2, sp0 - 0x20u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        ecx = t12;
        ebp = t11;
        goto L_101f81c7;
    }
    ecx = t12;
    edx = t13;
    ebp = t11;
L_101f813b: ;
    if (ebp != 0x1c0u)
    {
        wr32(sp0 - 0x38u, ebp);
        g->esp = sp0 - 0x2cu;
        t17 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, ebp, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, ebp);
        wr32(sp0 - 0x44u, t17);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        t18 = rd32(COW_IMG(0x10662dccu));
        wr32(sp0 + 8u, t17);
        g->edx = sp0 - 0x20u;
        g->esp = sp0 - 0x34u;
        t19 = cow_thiscall(g, COW_IMG(0x101c4790u), t18, 5, sp0 - 0x20u, t17, ebp, 0u, 0u);
        t20 = g->ecx;
        t21 = g->edx;
        if (t19 != 0x1c8u)
        {
            eax = t19;
            ecx = t20;
            edx = t21;
            esi = t17;
            ebp = 0xffffff9cu;
        }
        else
        {
            edx = t21;
            ebp = t19;
            esi = t17;
            t22 = rd32(esi);
            wr32(self + 0x6ccu, t22);
            t23 = rd32(esi + 8u);
            wr32(self + 0x6d0u, t23);
            esi = esi + 0x10u;
            edi = self + 0x6d4u;
            ecx = 0x6eu;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = t22;
            esi = rd32(sp0 + 8u);
        }
        wr32(sp0 - 0x38u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x34u;
        t24 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t25 = g->ecx;
        eax = t24;
        ecx = t25;
    }
    else
    {
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, ebp);
        wr32(sp0 - 0x44u, self + 0x6ccu);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        g->eax = self + 0x6ccu;
        t14 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x34u;
        t15 = cow_thiscall(g, COW_IMG(0x101c4790u), t14, 5, sp0 - 0x20u, self + 0x6ccu, ebp, 0u, 0u);
        t16 = g->ecx;
        eax = t15;
        ecx = t16;
        ebp = t15;
    }
L_101f81c7: ;
    wr32(sp0 - 0x38u, 0x1b8u);
    wr32(sp0 - 0x3cu, self + 0x6d4u);
    g->edx = self + 0x6d4u;
    g->esp = sp0 - 0x2cu;
    t26 = cow_call_regs(g, COW_IMG(0x101c8c50u), eax, g->ecx, g->edx, 1, 4, self + 0x6d4u, 0x1b8u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t27 = g->edx;
    if ((int32_t)ebp < 0)
    {
        eax = t26;
        edx = t27;
        goto L_101f828f;
    }
    eax = t26;
    edx = t27;
    if (rd32(self + 0x6ccu) != 0x58494d4bu) goto L_101f828f;
    if (rd32(self + 0x6d0u) != eax) goto L_101f828f;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t28 = cow_thiscall(g, COW_IMG(0x101f7fe0u), self, 0);
    t29 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        edx = t29;
        goto L_101f828f;
    }
    edx = t29;
    eax = rd32(sp0 - 0x24u) + 0x17au;
    ecx = rd32(sp0 - 0x24u) + 0x6d6u;
    ebx = 0u;
L_101f8225: ;
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 3u);
    esi = 0xau;
L_101f822f: ;
    if (rd8(ecx + 0x12u) != 1u)
    {
        wr16(eax - 6u, 0u);
    }
    else
    {
        wr16(eax - 6u, 0x80u);
    }
    wr8(eax - 4u, (uint8_t)edx);
    t30 = rd16(ecx - 2u);
    wr16(eax, (uint16_t)t30);
    wr16(eax + 2u, rd16(ecx));
    wr16(eax + 4u, 0x10u);
    wr16(eax + 6u, 1u);
    wr32(eax + 0x12u, ecx + 2u);
    wr16(eax + 0xau, 2u);
    if (esi != 1u)
    {
        eax = eax + 0x20u;
        ebp = ecx + 2u;
        ecx = ecx + 0x16u;
        esi = esi - 1u;
        goto L_101f822f;
    }
    eax = eax + 0x20u;
    ebp = ecx + 2u;
    ecx = ecx + 0x16u;
    if ((int32_t)(ebx + 1u) < 2)
    {
        ebx = ebx + 1u;
        goto L_101f8225;
    }
    wr32(sp0 - 0x38u, 1u);
    t31 = rd32(sp0 - 0x24u);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x101f9010u), t31, 1, 1u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return;
L_101f828f: ;
    g->ebp = ebp;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x101f8020u), g->eax, self, edx, 1, 9, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t33 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x101f9010u), self, 1, 1u);
    ebp = rd32(sp0 - 0x2cu);
    esi = rd32(sp0 - 0x30u);
    edi = rd32(sp0 - 0x34u);
L_101f82a2: ;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f80b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f80b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
