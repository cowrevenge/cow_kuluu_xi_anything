/* f_0x1014b300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014b300(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebp = g->ebp;

    if (rd8(sp0 + 4u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
        g->esi = self;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        t3 = rd32(self + 0x50u);
        wr32(self + 0x3cu, 0u);
        wr8(self + 0x44u, 0x20u);
        wr8(self + 0x45u, 0x18u);
        if (t3 == 0u)
        {
            eax = t3;
            ecx = t1;
            edx = t2;
        }
        else
        {
            eax = t3;
            ecx = t1;
            edx = t2;
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(self + 0x50u, 0u);
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        if (rd32(self + 0x50u) == 0u)
        {
            g->eax = eax;
            g->esp = sp0 - 8u;
            t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5400u, in_edi, in_ebp);
            t8 = g->edx;
            if (t7 == 0u)
            {
                eax = t7;
                edx = t8;
                ebp = 0u;
            }
            else
            {
                eax = t7;
                edx = t8;
                ebp = t7;
                ebx = 0x100u;
                edi = ebp;
L_1014b35a: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
                t10 = g->edx;
                if (ebx != 1u)
                {
                    eax = t9;
                    edx = t10;
                    ebx = ebx - 1u;
                    edi = edi + 0x54u;
                    goto L_1014b35a;
                }
                eax = t9;
                edx = t10;
            }
            wr32(self + 0x50u, ebp);
        }
        wr16(self + 0x5cu, 0u);
        wr32(sp0 + 4u, 0u);
        ebx = 0u;
L_1014b378: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, COW_IMG(0x10161540u), rd32(COW_IMG(0x10621900u)), 1, ebx);
        t12 = g->edx;
        if ((uint16_t)t11 == 0u)
        {
            eax = t11;
            edx = t12;
            edi = t11;
        }
        else
        {
            edx = t12;
            edi = t11;
            g->edx = edx;
            t13 = rd16(self + 0x5cu);
            t14 = rd32(self + 0x50u);
            g->esp = sp0 - 0x10u;
            t15 = cow_call_regs(g, COW_IMG(0x100991f0u), t13 * 0x15u, g->ecx, g->edx, 1, 0);
            t16 = g->edx;
            if (t15 == 0u)
            {
                edx = t16;
                ebp = t13 * 0x54u + t14;
                goto L_1014b3c0;
            }
            eax = t15;
            ebp = t13 * 0x54u + t14;
            if (rd16(eax + rd8(self + 0x54u) * 6u + 8u) >= (uint16_t)edi)
            {
                edx = rd8(self + 0x54u) * 3u;
                ebx = 0x80808080u;
                goto L_1014b3c5;
            }
            edx = rd8(self + 0x54u) * 3u;
L_1014b3c0: ;
            ebx = 0x80404040u;
L_1014b3c5: ;
            t17 = rd32(sp0 + 4u) + 1u;
            g->eax = t17;
            g->esp = sp0 - 0x10u;
            t18 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 1u, 0x39u, t17, ebx);
            t19 = g->edx;
            t20 = (uint16_t)edi + 1u;
            t21 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, t19, 4, 4u, 0x3au, t20, ebx);
            t22 = g->edx;
            t23 = rd32(sp0 + 4u);
            wr32(ebp + 0x48u, t23);
            wr16(self + 0x5cu, (uint16_t)(rd16(self + 0x5cu) + 1u));
            eax = t21;
            edx = t22;
            ebx = t23;
            edi = t20;
        }
        wr32(sp0 + 4u, ebx + 1u);
        if ((int32_t)(ebx + 1u) < 256)
        {
            ebx = ebx + 1u;
            goto L_1014b378;
        }
        ebx = ebx + 1u;
        t24 = (edx & 0xffff0000u) | rd16(self + 0x5cu);
        t25 = rd32(self + 0x50u);
        g->esi = self;
        g->edi = edi;
        g->eax = t25;
        g->esp = sp0 - 0x10u;
        t26 = cow_fastcall(g, COW_IMG(0x101f7020u), self, t24, 3, t25, t24, 1u);
        t27 = g->edx;
        t28 = rd16(self + 0x62u);
        g->ebx = ebx;
        cow_call_regs(g, COW_IMG(0x101f7080u), t26, self, t27, 0, 2, t28, 0u);
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014b300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
