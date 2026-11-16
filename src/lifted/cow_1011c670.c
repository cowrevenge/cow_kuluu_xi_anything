/* f_0x1011c670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1011c670(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        if (rd32(arg1 + 0x40u) != 0u)
        {
            eax = rd32(arg1 + 0x40u);
            goto L_1011c693;
        }
        if (rd32(arg1 + 0x44u) == 0u)
        {
            eax = rd32(arg1 + 0x44u);
            edx = in_edx;
            ebx = in_ebx & 0xffffff00u;
            goto L_1011c709;
        }
        eax = rd32(arg1 + 0x44u);
L_1011c693: ;
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, eax);
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(eax) + 0x3cu), rd32(eax), 3, eax, 0u, sp0 + 4u);
        t1 = g->edx;
        wr32(sp0 - 0x30u, arg1);
        g->edx = t1;
        cow_thiscall(g, rd32(rd32(arg1) + 8u), rd32(arg1), 1, arg1);
        t2 = g->edx;
        wr32(sp0 - 0x30u, arg2);
        g->edx = t2;
        t3 = rd32(COW_IMG(0x10662dccu));
        t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), t3, 1, arg2);
        t5 = g->ecx;
        t6 = g->edx;
        if ((int32_t)t4 <= 0)
        {
            eax = t4;
            edx = t6;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            ecx = t5;
            edx = t6;
            esi = t4;
            wr32(sp0 - 0x30u, esi);
            g->esp = sp0 - 0x24u;
            t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
            t8 = g->edx;
            if (t7 == 0u)
            {
                eax = t7;
                edx = t8;
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                edx = t8;
                edi = t7;
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, esi);
                wr32(sp0 - 0x38u, edi);
                wr32(sp0 - 0x3cu, arg2);
                t9 = rd32(COW_IMG(0x10662dccu));
                g->esp = sp0 - 0x2cu;
                cow_thiscall(g, COW_IMG(0x101c4740u), t9, 4, arg2, edi, esi, 0u);
                t10 = g->ecx;
                wr32(sp0 - 0x30u, sp0 - 0x1cu);
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, esi);
                wr32(sp0 - 0x44u, edi);
                wr32(sp0 - 0x48u, 0u);
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x50u, arg1);
                g->ecx = t10;
                g->edx = sp0 - 0x1cu;
                t11 = cow_stdcall(g, COW_IMG(0x102d447du), 9, arg1, 0u, 0u, edi, esi, 0u, 1u, 0u, sp0 - 0x1cu);
                t12 = g->ecx;
                t13 = g->edx;
                if (t11 != 0u)
                {
                    eax = t11;
                    ecx = t12;
                    edx = t13;
                    ebx = in_ebx & 0xffffff00u;
                }
                else
                {
                    eax = t11;
                    ecx = t12;
                    edx = t13;
                    ebx = (in_ebx & 0xffffff00u) | 1u;
                }
                wr32(sp0 - 0x30u, edi);
                g->eax = eax;
                g->esp = sp0 - 0x2cu;
                t14 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
                t15 = g->edx;
                eax = t14;
                edx = t15;
            }
        }
    }
L_1011c709: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011c670(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
