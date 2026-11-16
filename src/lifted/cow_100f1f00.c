/* f_0x100f1f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1f00(Guest* g)
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd8(self + 7u);
    wr32(self, 0u);
    t2 = rd16(self + 4u);
    wr8(self + 7u, (uint8_t)((uint8_t)t1 + 1u));
    if ((uint16_t)t2 != 0u)
    {
        eax = in_eax;
        ebx = in_ebx;
    }
    else
    {
        ecx = ((self | t1) & 0xffffff00u) | (uint8_t)((uint8_t)t1 + 1u);
        g->eax = in_eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_stdcall(g, COW_IMG(0x10310dc2u), 0);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 1u)
        {
            eax = t3;
            ebx = in_ebx;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            wr16(self + 4u, (uint16_t)eax);
            if (rd32(self + 0x20u) == 0u)
            {
                wr32(sp0 - 0x14u, 0x1060u);
                g->esp = sp0 - 8u;
                t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1060u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t7 = g->ecx;
                t8 = g->edx;
                if (t6 == 0u)
                {
                    ecx = t7;
                    edx = t8;
                    eax = 0u;
                }
                else
                {
                    eax = t6;
                    edx = t8;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t9 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
                    t10 = g->ecx;
                    t11 = g->edx;
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                }
                wr32(self + 0x20u, eax);
            }
            if (rd32(self + 0x24u) != 0u)
            {
                eax = rd32(self + 0x24u);
            }
            else
            {
                wr32(sp0 - 0x14u, 0x1060u);
                g->esp = sp0 - 8u;
                t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1060u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t13 = g->ecx;
                t14 = g->edx;
                if (t12 == 0u)
                {
                    ecx = t13;
                    edx = t14;
                    eax = 0u;
                }
                else
                {
                    eax = t12;
                    edx = t14;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t15 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
                    t16 = g->ecx;
                    t17 = g->edx;
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                }
                wr32(self + 0x24u, eax);
            }
            wr32(sp0 - 0x14u, in_ebp);
            if (rd8(self + 6u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 6u);
            }
            else
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t18 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
                t19 = g->ecx;
                t20 = g->edx;
                if ((int16_t)t18 <= 0)
                {
                    eax = t18;
                    edx = t20;
                    goto L_100f1fb0;
                }
                ecx = t19;
                edx = t20;
                ebp = t18;
                edi = 0u;
L_100f1f94: ;
                wr32(sp0 - 0x18u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t21 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, edi);
                t22 = g->ecx;
                t23 = g->edx;
                if (t21 == 0u)
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                }
                else
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                    wr32(sp0 - 0x18u, eax);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t24 = cow_cdecl(g, COW_IMG(0x100e63c0u), 1, eax);
                    t25 = g->ecx;
                    t26 = g->edx;
                    eax = t24;
                    ecx = t25;
                    edx = t26;
                }
                if ((int16_t)(edi + 1u) < (int16_t)ebp)
                {
                    edi = edi + 1u;
                    goto L_100f1f94;
                }
            }
L_100f1fb0: ;
            if ((uint8_t)arg1 == 0u)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)arg1;
                ebx = in_ebx;
            }
            else
            {
                wr32(sp0 - 0x14u, in_ebx);
                wr32(sp0 - 0x18u, self);
                wr32(sp0 - 0x1cu, COW_IMG(0x100f2020u));
                wr32(sp0 - 0x20u, 0xffffffffu);
                wr32(sp0 - 0x24u, sp0 - 8u);
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                g->edx = edx;
                t27 = rd8(self + 6u);
                g->esp = sp0 - 0x14u;
                t28 = cow_thiscall(g, COW_IMG(0x100f25f0u), self, 4, sp0 - 8u, 0xffffffffu, COW_IMG(0x100f2020u), self);
                t29 = g->edx;
                if (t28 != 0u)
                {
                    eax = t28;
                    edx = t29;
                    ebx = (in_ebx & 0xffffff00u) | t27;
                }
                else
                {
                    eax = t28;
                    edx = t29;
                    ebx = (in_ebx & 0xffffff00u) | t27;
                    if (rd8(self + 6u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 6u);
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 6u);
                        wr16(self + 0xau, 0u);
                    }
                }
                if ((uint8_t)ebx != 0u)
                {
                    ebx = rd32(sp0 - 0x14u);
                }
                else
                {
                    ebx = rd32(sp0 - 0x14u);
                    wr32(sp0 - 0x14u, self);
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x20u, sp0 - 8u);
                    g->esp = sp0 - 0x10u;
                    cow_fastcall(g, COW_IMG(0x100f2690u), self, edx, 4, sp0 - 8u, 0xffffffffu, 0u, self);
                    wr32(sp0 - 0x14u, self);
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x20u, sp0 - 8u);
                    t30 = cow_fastcall(g, COW_IMG(0x100f2720u), self, sp0 - 8u, 4, sp0 - 8u, 0xffffffffu, 0u, self);
                    eax = t30;
                }
            }
        }
    }
    g->ebx = ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f1f00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
