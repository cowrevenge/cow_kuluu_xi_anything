/* f_0x10142830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10142830(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t3;
        esi = t1;
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_stdcall(g, COW_IMG(0x101427a0u), 1, arg1);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2c3u);
        t5 = g->edx;
        g->edx = t5;
        t6 = rd32(COW_IMG(0x105781f8u));
        t7 = cow_thiscall(g, COW_IMG(0x1013a320u), t6, 2, t4, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    if ((uint8_t)arg2 != 0u)
    {
        if (rd32(arg1 + 0x38u) == 0u)
        {
            ecx = rd32(arg1 + 0x38u);
        }
        else
        {
            ecx = rd32(arg1 + 0x38u);
            if ((int32_t)esi < (int16_t)rd16(arg1 + 0x20u))
            {
                if (ecx + esi * 0x54u == 0u)
                {
                    edx = esi * 0x15u;
                }
                else
                {
                    eax = ecx + esi * 0x54u;
                    edx = esi * 0x15u;
                    if ((int32_t)rd32(eax + 0x48u) < 61440)
                    {
                        ecx = rd32(COW_IMG(0x10578204u));
                        goto L_101428af;
                    }
                    ecx = rd32(COW_IMG(0x10578204u));
                    if (rd32(ecx + 8u) == 0u) goto L_101428b8;
                    eax = rd32(ecx + 8u);
L_101428af: ;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
                    t13 = g->ecx;
                    t14 = g->edx;
                    ecx = t13;
                    edx = t14;
                }
            }
        }
L_101428b8: ;
        if (rd32(self + 0x1cu) != 0u)
        {
            wr32(self + 0x20u, esi);
        }
    }
    if ((int32_t)rd32(COW_IMG(0x10371480u)) >= 0)
    {
        eax = rd32(COW_IMG(0x10371480u));
    }
    else
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t15 = cow_stdcall(g, COW_IMG(0x10141e70u), 0);
        t16 = g->ecx;
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_cdecl(g, COW_IMG(0x10142770u), 1, t15);
        t19 = g->edx;
        wr32(COW_IMG(0x10371480u), t18);
        eax = t18;
        edx = t19;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10142830(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
