/* f_0x101d9100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d9100(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10663428u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10663428u));
        goto L_101d911a;
    }
    ecx = rd32(COW_IMG(0x10663428u));
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101d91cb;
    }
L_101d911a: ;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101d7da0u), ecx, 0);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        esi = t1;
        if ((uint32_t)(int16_t)arg2 == 1u)
        {
            ecx = rd32(COW_IMG(0x104dfd98u));
            edi = esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t9 = cow_call_regs(g, COW_IMG(0x1020a410u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                edx = t11;
                if (rd32(COW_IMG(0x1066342cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x1066342cu));
                }
                else
                {
                    eax = rd32(COW_IMG(0x1066342cu));
                    g->eax = eax;
                    g->esp = sp0 - 0xcu;
                    t14 = cow_fastcall(g, COW_IMG(0x1020b3a0u), rd32(COW_IMG(0x10663428u)), edx, 0);
                    t15 = g->edx;
                    t16 = (t15 & 0xffffff00u) | rd8(edi + 0x16u) != 1u;
                    t17 = (t14 & 0xffff0000u) | rd16(edi + 0x14u);
                    t18 = cow_call_regs(g, COW_IMG(0x101d8800u), t17, rd32(COW_IMG(0x1066342cu)), t16, 0, 4, t17, 1u, t16, 0u);
                    t19 = g->edx;
                    eax = t18;
                    edx = t19;
                }
            }
            else
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
        else
        {
            ecx = rd32(COW_IMG(0x104dfd98u));
            edi = esi * 0x28u + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu;
            if ((uint32_t)(int16_t)arg2 != 2u)
            {
                eax = (uint32_t)(int16_t)arg2 - 2u;
            }
            else
            {
                if (rd8(edi) == 3u)
                {
                    g->eax = (uint32_t)(int16_t)arg2 - 2u;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x3au);
                    t6 = g->edx;
                    g->ebx = self;
                    g->edx = t6;
                    g->esp = sp0 - 0xcu;
                    t7 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d91d0u), esi, t5, 0u, 0u, 1u, 0u);
                    t8 = g->edx;
                    eax = t7;
                    edx = t8;
                }
                else
                {
                    g->eax = (uint32_t)(int16_t)arg2 - 2u;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t3 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
                    t4 = g->edx;
                    eax = t3;
                    edx = t4;
                }
            }
        }
        t20 = rd32(self + 8u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t20, 1u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
L_101d91cb: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9100(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
