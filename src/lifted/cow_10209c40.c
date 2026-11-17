/* f_0x10209c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10209c40(Guest* g)
{
    uint32_t eax;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        g->esi = 0u;
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        if (rd32(self + 0x58u) == 0u)
        {
            ecx = t1;
            edx = t2;
        }
        else
        {
            eax = rd32(self + 0x58u);
            ecx = t1;
            edx = t2;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(self + 0x58u, 0u);
            ecx = t3;
            edx = t4;
        }
        if (rd32(self + 0x5cu) != 0u)
        {
            eax = rd32(self + 0x5cu);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(self + 0x5cu, 0u);
            ecx = t5;
            edx = t6;
        }
        t7 = rd32(self + 0x58u);
        wr16(self + 0x52u, 0x64u);
        if (t7 != 0u)
        {
            esi = 0u;
            edi = 0x64u;
        }
        else
        {
            eax = t7;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20d0u, in_edi, in_ebx);
            t9 = g->ecx;
            t10 = g->edx;
            if (t8 == 0u)
            {
                ecx = t9;
                edx = t10;
                ebx = 0u;
                esi = 0u;
                edi = 0x64u;
            }
            else
            {
                eax = t8;
                edx = t10;
                ebx = t8;
                esi = ebx;
                edi = 0x64u;
L_10209ca9: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t11 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
                t12 = g->ecx;
                t13 = g->edx;
                if (edi != 1u)
                {
                    eax = t11;
                    edx = t13;
                    esi = esi + 0x54u;
                    edi = edi - 1u;
                    goto L_10209ca9;
                }
                ecx = t12;
                edx = t13;
                esi = esi + 0x54u;
                edi = edi - 1u;
            }
            wr32(self + 0x58u, ebx);
        }
        if (rd32(self + 0x5cu) != 0u)
        {
            eax = rd32(self + 0x5cu);
        }
        else
        {
            eax = rd32(self + 0x5cu);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xe10u, in_edi, in_ebx);
            t15 = g->ecx;
            t16 = g->edx;
            wr32(self + 0x5cu, t14);
            eax = t14;
            ecx = t15;
            edx = t16;
        }
        t17 = rd16(self + 0x52u);
        wr16(self + 0x54u, 0u);
        if ((int16_t)t17 <= 0) goto L_10209db0;
        ebx = 0u;
L_10209ce4: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x100a3500u), 1, ebx);
        t19 = g->edx;
        if (t18 == 0u)
        {
            eax = t18;
            edx = t19;
        }
        else
        {
            eax = t18;
            esi = eax;
            edi = rd32(self + 0x5cu) + (uint32_t)(int16_t)rd16(self + 0x54u) * 0x24u;
            ecx = 9u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t20 = (((int32_t)rd8(rd32(self + 0x5cu) + (uint32_t)(int16_t)rd16(self + 0x54u) * 0x24u + 0x20u) > 10) - 1u & 0x101010u) - 0x7f8f8f90u;
            t21 = rd8(rd32(self + 0x5cu) + (uint32_t)(int16_t)rd16(self + 0x54u) * 0x24u + 0x20u);
            t22 = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x54u) * 0x54u;
            g->eax = t21;
            t23 = rd32(self + 0x5cu);
            t24 = rd16(self + 0x54u);
            g->esp = sp0 - 0x10u;
            t25 = cow_fastcall(g, COW_IMG(0x101f4b20u), t22, t23, 4, 0u, 7u, t21, t20);
            t26 = g->edx;
            t27 = t23 + (uint32_t)(int16_t)t24 * 0x24u;
            t28 = cow_fastcall(g, COW_IMG(0x101f4b20u), t22, t26, 4, 1u, 0x11u, t27, 0x80808080u);
            t29 = g->edx;
            t30 = cow_fastcall(g, COW_IMG(0x101f4b20u), t22, t29, 4, 2u, 0x25u, t27, 0x80808080u);
            t31 = rd32(t27 + 0x18u);
            cow_fastcall(g, COW_IMG(0x101f4b20u), t22, t31, 4, 3u, 9u, t31, 0x80808080u);
            t32 = g->edx;
            t33 = rd32(t27 + 0x1cu) + 1u;
            g->eax = t33;
            t34 = cow_fastcall(g, COW_IMG(0x101f4b20u), t22, t32, 4, 4u, 6u, t33, 0x80808080u);
            t35 = g->edx;
            wr32(t22 + 0x48u, t27);
            wr16(self + 0x54u, (uint16_t)(rd16(self + 0x54u) + 1u));
            eax = t34;
            edx = t35;
            esi = t27;
            edi = t22;
        }
        if ((int32_t)(ebx + 1u) < (int16_t)rd16(self + 0x52u))
        {
            ecx = (uint32_t)(int16_t)rd16(self + 0x52u);
            ebx = ebx + 1u;
            goto L_10209ce4;
        }
L_10209db0: ;
        t36 = (edx & 0xffff0000u) | rd16(self + 0x54u);
        t37 = rd32(self + 0x58u);
        g->esi = esi;
        g->edi = edi;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x101f7020u), self, t36, 3, t37, t36, 1u);
        wr8(self + 0x51u, 0u);
    }
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10209c40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
