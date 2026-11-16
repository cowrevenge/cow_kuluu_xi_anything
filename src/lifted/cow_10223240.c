/* f_0x10223240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10223240(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (-((uint8_t)arg2 != 0u) & 0x900u) + 0x200u;
    if (arg1 == 0u)
    {
        eax = 0xffffffffu;
        goto L_1022334f;
    }
    ecx = t1;
    loc_4 = t1;
    if (rd8(arg1) == 0u)
    {
        eax = 0xffffffffu;
        goto L_1022334f;
    }
    if (rd32(COW_IMG(0x1066714cu)) == 0u)
    {
        eax = 0xffffffffu;
        goto L_1022334f;
    }
    edx = rd32(COW_IMG(0x1066714cu));
    t2 = -((uint8_t)arg2 != 0u) & 0x700u;
    if ((int32_t)t2 >= (int32_t)ecx)
    {
        eax = 0xffffffffu;
        goto L_1022334f;
    }
    ebp = t2;
    eax = ebp * 0x30u;
    loc_8 = ebp * 0x30u;
L_102232aa: ;
    if (rd16(eax + rd32(COW_IMG(0x1066714cu))) == 0u) goto L_1022332a;
    ecx = rd32(COW_IMG(0x1066714cu));
    edi = rd16(eax + rd32(COW_IMG(0x1066714cu)));
    if (arg3 == 0u)
    {
        eax = arg3;
        goto L_102232fc;
    }
    if (arg4 == 0u)
    {
        eax = arg3;
        goto L_102232fc;
    }
    if ((int32_t)arg4 <= 0)
    {
        eax = arg3;
        esi = 0u;
        goto L_102232f8;
    }
    esi = 0u;
L_102232cc: ;
    if (rd16(arg3 + esi * 2u) != edi)
    {
        eax = arg3;
        edx = rd16(arg3 + esi * 2u);
        goto L_102232f3;
    }
    edx = rd16(arg3 + esi * 2u);
    if ((uint8_t)arg2 == 0u)
    {
        eax = (arg3 & 0xffffff00u) | (uint8_t)arg2;
        goto L_102232f8;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_call_regs(g, COW_IMG(0x102231f0u), (arg3 & 0xffffff00u) | (uint8_t)arg2, g->ecx, g->edx, 1, 1, edi);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_102232f8;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
L_102232f3: ;
    if ((int32_t)(esi + 1u) < (int32_t)arg4)
    {
        esi = esi + 1u;
        goto L_102232cc;
    }
    esi = esi + 1u;
L_102232f8: ;
    if (esi == arg4) goto L_1022332a;
L_102232fc: ;
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 0);
    t7 = g->edx;
    g->ebx = arg4;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    t8 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, ebp);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x20u;
    t11 = cow_call_regs(g, COW_IMG(0x10223930u), t8, t9, t10, 1, 0);
    t12 = g->edx;
    g->ebx = arg4;
    g->edx = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_stdcall(g, COW_IMG(0x10223b10u), 1, ebp);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), arg1, 2, arg1, t13);
    t16 = g->edx;
    if ((uint8_t)t15 != 0u) goto L_1022334d;
    edx = t16;
L_1022332a: ;
    if ((int32_t)(ebp + 1u) < (int32_t)loc_4)
    {
        eax = loc_8 + 0x30u;
        ebp = ebp + 1u;
        loc_8 = loc_8 + 0x30u;
        goto L_102232aa;
    }
    eax = loc_8 + 0x30u;
    g->ebx = in_ebx;
    return 0xffffffffu;
L_1022334d: ;
    eax = edi;
L_1022334f: ;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
