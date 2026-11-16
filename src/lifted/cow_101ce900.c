/* f_0x101ce900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101ce900(Guest* g)
{
    double d7;
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(self + 0x28u) == 0u)
    {
        eax = in_eax;
        goto L_101ce9d2;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101ce9d2;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    g->edx = t6;
    fpush(g, d7);
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    t10 = rd16(self + 0x26u);
    wr16(self + 0x24u, (uint16_t)(rd16(self + 0x24u) + (uint16_t)((uint16_t)t8 * t10)));
    if ((int16_t)rd16(self + 0x24u) >= 32)
    {
        eax = (t8 & 0xffff0000u) | rd16(self + 0x24u);
        edx = t9;
        if ((int16_t)eax <= 255)
        {
            if ((uint16_t)eax == 0x80u)
            {
                if ((int16_t)rd16(self + 0x28u) <= 0)
                {
                    eax = (eax & 0xffff0000u) | rd16(self + 0x28u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | rd16(self + 0x28u);
                    wr16(self + 0x28u, (uint16_t)(eax - 1u));
                    eax = eax - 1u;
                }
            }
        }
        else
        {
            wr16(self + 0x24u, 0xffu);
            wr16(self + 0x26u, 0xfff8u);
        }
    }
    else
    {
        eax = (t8 & 0xffff0000u) | rd16(self + 0x24u);
        edx = t9;
        wr16(self + 0x24u, 0x40u);
        wr16(self + 0x26u, 8u);
    }
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t12 = (((uint8_t)arg1 << 8u | (uint32_t)(int16_t)rd16(self + 0x24u)) << 8u | (uint32_t)(int16_t)rd16(self + 0x24u)) << 8u | (uint32_t)(int16_t)rd16(self + 0x24u);
    g->edx = (uint32_t)(int16_t)rd16(self + 0x24u);
    t13 = rd16(self + 0x24u);
    cow_thiscall(g, rd32(rd32(t11) + 0x30u), t11, 1, t12);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
    }
    else
    {
        edx = t16;
        if ((int32_t)rd32(self + 0x6cu) <= 0)
        {
            eax = rd32(self + 0x6cu);
        }
        else
        {
            eax = rd32(self + 0x6cu);
            ebx = 0u;
            edi = self + 0x70u;
L_101ce9ac: ;
            if (rd32(edi) != 0u)
            {
                ecx = rd32(edi);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x101ce900u), eax, ecx, g->edx, 0, 1, 0x40u);
                t17 = g->edx;
                edx = t17;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0x6cu))
            {
                eax = rd32(self + 0x6cu);
                ebx = ebx + 1u;
                edi = edi + 4u;
                goto L_101ce9ac;
            }
            eax = rd32(self + 0x6cu);
        }
    }
    return (eax & 0xffffff00u) | rd16(self + 0x28u) != 0u;
L_101ce9d2: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ce900(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
