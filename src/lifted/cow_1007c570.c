/* f_0x1007c570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007c570(Guest* g)
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
    uint32_t t23;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x30u, in_ebx);
    t1 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x106644d8u), 0u);
    if (t1 == 0u) goto L_1007c6b4;
    ecx = t1;
    if (rd32(COW_IMG(0x10664494u)) == 0u) goto L_1007c6b4;
    eax = rd32(COW_IMG(0x10664494u));
    if (arg3 != 0x3au)
    {
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        if (rd32(eax + 8u) != 0u)
        {
            edx = rd32(eax + 8u);
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            edx = rd32(eax + 8u);
            wr32(sp0 - 0x34u, in_esi);
            wr32(sp0 - 0x38u, in_edi);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x3cu, ecx);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x24u, 0u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t2 = cow_cdecl(g, COW_IMG(0x100f9900u), 1, ecx);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(sp0 - 0x40u, (uint8_t)t2);
            g->edx = t4;
            g->esp = sp0 - 0x3cu;
            t5 = cow_cdecl(g, COW_IMG(0x100e3200u), 1, (uint8_t)t2);
            t6 = g->edx;
            wr32(sp0 - 0x44u, 1u);
            wr32(sp0 - 0x48u, 0u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, sp0 + 0xcu);
            g->edx = t6;
            g->esp = sp0 - 0x40u;
            t7 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 0xcu, 4, sp0 + 0xcu, 0u, 0u, 1u);
            t8 = g->edx;
            if ((uint8_t)t7 == 0u)
            {
                edx = t8;
                edi = t5;
            }
            else
            {
                edi = t5;
                wr32(sp0 - 0x2cu, rd32(arg3));
                edx = arg3;
            }
            wr32(sp0 - 0x3cu, 2u);
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, sp0 + 0xcu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t9 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 0xcu, 4, sp0 + 0xcu, 0u, 0u, 2u);
            t10 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                edx = t10;
            }
            else
            {
                wr32(sp0 - 0x28u, rd32(arg3));
                edx = arg3;
            }
            wr32(sp0 - 0x3cu, 3u);
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, sp0 + 0xcu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t11 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 0xcu, 4, sp0 + 0xcu, 0u, 0u, 3u);
            t12 = g->edx;
            if ((uint8_t)t11 == 0u)
            {
                eax = t11;
                edx = t12;
            }
            else
            {
                wr32(sp0 - 0x24u, rd32(arg3));
                eax = rd32(arg3);
                edx = arg3;
            }
            wr32(sp0 - 0x3cu, 0u);
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x1020a600u), rd32(COW_IMG(0x10664494u)), 1, 0u);
            wr32(sp0 - 0x3cu, edi);
            wr32(sp0 - 0x40u, sp0 - 0x2cu);
            wr32(sp0 - 0x44u, 0x10u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            t13 = (sp0 - 0x2cu & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
            wr32(sp0 - 0x4cu, t13);
            g->esi = rd32(COW_IMG(0x10664494u)) + 0x5cu;
            g->ecx = rd32(COW_IMG(0x104dfd98u));
            t14 = rd32(COW_IMG(0x104dfd98u));
            t15 = rd32(COW_IMG(0x10664494u));
            g->esp = sp0 - 0x40u;
            t16 = cow_cdecl(g, COW_IMG(0x1020c1c0u), 3, t13, sp0 - 0x20u, 0x10u);
            t17 = g->ecx;
            wr32(sp0 - 0x44u, t16);
            t18 = (t17 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
            wr32(sp0 - 0x48u, t18);
            t19 = rd32(rd32(COW_IMG(0x103551e4u)) + 4u);
            wr32(sp0 - 0x4cu, t19);
            wr32(sp0 - 0x50u, t15 + 0x5cu);
            g->eax = t19;
            g->edx = rd32(COW_IMG(0x103551e4u));
            t20 = rd32(COW_IMG(0x103551e4u));
            g->esp = sp0 - 0x38u;
            t21 = cow_cdecl(g, COW_IMG(0x100e31c0u), 6, t15 + 0x5cu, t19, t18, t16, sp0 - 0x2cu, rd32(sp0 - 0x3cu));
            t22 = g->edx;
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            wr32(sp0 - 0x4cu, t15 + 0x5cu);
            wr32(sp0 - 0x50u, 1u);
            g->edx = t22;
            cow_call_regs(g, COW_IMG(0x1020a9d0u), t21, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, t15 + 0x5cu, 1u, 0u, 0u, 0u);
            t23 = g->edx;
            edx = t23;
            esi = rd32(sp0 - 0x34u);
            edi = rd32(sp0 - 0x38u);
        }
    }
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return arg3;
L_1007c6b4: ;
    g->esi = in_esi;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
