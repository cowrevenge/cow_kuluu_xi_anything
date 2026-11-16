/* f_0x101e2e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e2e90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)arg2 == 0u)
    {
        eax = t1;
        edx = t3;
        esi = t1;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x1edu);
        t5 = g->edx;
        g->edx = t5;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t4, 2u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        ecx = rd32(self + 0xcu);
        if ((int32_t)esi >= 0)
        {
            if ((int32_t)esi < (int32_t)rd32(self + 4u))
            {
                if ((uint8_t)arg2 != 0u)
                {
                    if (rd32(ecx + esi * 0x54u + 0x48u) == 0u)
                    {
                        eax = rd32(ecx + esi * 0x54u + 0x48u);
                    }
                    else
                    {
                        eax = rd32(ecx + esi * 0x54u + 0x48u);
                        t8 = (ecx & 0xffff0000u) | rd16(eax + 6u);
                        g->edi = self;
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        t9 = cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, t8, 0u, 0u, 0u);
                        t10 = g->edx;
                        eax = t9;
                        edx = t10;
                    }
                }
            }
        }
    }
    if (rd8(self + 0x10u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, COW_IMG(0x101e1b10u), rd32(COW_IMG(0x106634b8u)), 2, 0u, esi);
        t12 = g->edx;
        if (t11 == 0u)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            edx = t12;
            g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
            g->edi = self;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t13 = cow_thiscall(g, COW_IMG(0x101e27d0u), eax, 1, COW_IMG(0x106634d4u));
            t14 = g->edx;
            g->edx = t14;
            t15 = rd32(COW_IMG(0x106634acu));
            t16 = cow_thiscall(g, COW_IMG(0x101e06c0u), t15, 0);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
            ebx = 2u;
            esi = COW_IMG(0x106634e2u);
L_101e2f3d: ;
            if (rd16(esi) == 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(esi);
            }
            else
            {
                eax = (eax & 0xffff0000u) | rd16(esi);
                t19 = (edx & 0xffffff00u) | rd8(esi + 2u);
                t20 = (eax & 0xffffff00u) | rd8(esi - 2u);
                t21 = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 2u);
                g->ebx = ebx;
                g->eax = t20;
                g->edx = t19;
                t22 = rd32(COW_IMG(0x106634acu));
                g->esp = sp0 - 0xcu;
                t23 = cow_thiscall(g, COW_IMG(0x101e0d90u), t22, 4, t21, t20, eax, t19);
                t24 = g->ecx;
                t25 = g->edx;
                eax = t23;
                ecx = t24;
                edx = t25;
            }
            if ((int32_t)(esi + 6u) < (int32_t)COW_IMG(0x10663512u))
            {
                ebx = ebx + 1u;
                esi = esi + 6u;
                goto L_101e2f3d;
            }
            t26 = rd32(COW_IMG(0x106634acu));
            t27 = rd32(COW_IMG(0x106634dcu));
            t28 = rd8(COW_IMG(0x106634dau));
            wr8(t26 + 0x14u, (uint8_t)t28);
            wr16(t26 + 0x20u, (uint16_t)t27);
            wr8(self + 0x10u, 0u);
            eax = t26;
            edx = (edx & 0xffffff00u) | t28;
        }
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2e90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
