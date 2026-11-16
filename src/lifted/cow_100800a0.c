/* f_0x100800a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100800a0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if ((uint16_t)arg2 != 0u)
        {
            g->eax = rd32(COW_IMG(0x10578158u));
            g->edx = in_edx;
            t1 = rd32(COW_IMG(0x10578158u));
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, COW_IMG(0x1018ee20u), rd32(t1 + 0x64044u), 1, 1u);
            t3 = g->edx;
            g->edx = t3;
            t4 = rd32(rd32(COW_IMG(0x1057815cu)) + 0x64044u);
            t5 = cow_thiscall(g, COW_IMG(0x1018ee20u), t4, 1, 1u);
            t6 = g->ecx;
            t7 = g->edx;
            if ((int16_t)rd16(arg1 + 0x14u) < 0)
            {
                edx = t7;
            }
            else
            {
                eax = t5;
                ecx = t6;
                esi = arg1;
L_100800e8: ;
                t8 = (eax & 0xffff0000u) | rd16(esi + 0x16u);
                if ((uint16_t)(t8 & arg3) != 0u)
                {
                    eax = t8;
                    edx = t8 & arg3;
                }
                else
                {
                    eax = t8;
                    edx = t8 & arg3;
                    if ((uint16_t)(eax & arg2) == 0u)
                    {
                        eax = eax & arg2;
                    }
                    else
                    {
                        eax = eax & arg2;
                        g->ebx = arg2;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t9 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, esi, in_edi);
                        t10 = g->ecx;
                        t11 = g->edx;
                        eax = t9;
                        ecx = t10;
                        edx = t11;
                    }
                }
                if ((int16_t)rd16(esi + 0x2cu) >= 0)
                {
                    esi = esi + 0x18u;
                    goto L_100800e8;
                }
            }
            g->eax = rd32(COW_IMG(0x10578158u));
            g->edx = edx;
            t12 = rd32(COW_IMG(0x10578158u));
            g->esp = sp0 - 8u;
            t13 = cow_thiscall(g, COW_IMG(0x1018ee20u), rd32(t12 + 0x64044u), 1, 0u);
            t14 = g->edx;
            cow_thiscall(g, COW_IMG(0x1018ee20u), rd32(rd32(COW_IMG(0x1057815cu)) + 0x64044u), 1, 0u);
        }
    }
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100800a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100800a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
