/* f_0x1020f740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1020f740(Guest* g)
{
    uint32_t eax;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2 + 0x14d0u) == 0u)
    {
        edx = in_edx;
        goto L_1020f791;
    }
    eax = rd32(arg2 + 0x14d0u);
    if (rd16(eax) == 0u)
    {
        edx = in_edx;
        goto L_1020f791;
    }
    t1 = (self & 0xffff0000u) | rd16(arg1);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10131fa0u), rd32(COW_IMG(0x105781a8u)), 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_1020f777;
    }
    edx = t3;
    g->edx = edx;
    return 0x80509050u;
L_1020f777: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10132050u), rd32(COW_IMG(0x105781a8u)), 1, arg2);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_1020f791;
    }
    edx = t5;
    g->edx = edx;
    return 0x80909040u;
L_1020f791: ;
    if (rd32(arg2 + 0x14b4u) == 0u) goto L_1020f823;
    eax = rd32(arg2 + 0x14b4u);
    if (rd16(eax) != 7u) goto L_1020f823;
    if (rd32(arg2 + 0x1554u) == 0u) goto L_1020f84d;
    eax = rd32(arg2 + 0x1554u);
    if (rd8(eax) == 1u)
    {
        ecx = rd8(eax);
        eax = rd8(eax) - 1u;
        edi = (in_edi & 0xffff0000u) | rd16(rd32(arg2 + 0x1558u));
        goto L_1020f7e3;
    }
    ecx = rd8(eax);
    eax = rd8(eax) - 1u;
    edx = rd32(arg2 + 0x1558u);
    edi = (in_edi & 0xffff0000u) | rd16(rd32(arg2 + 0x1558u));
    if (eax != 1u) goto L_1020f84d;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x10223360u), ecx, 1, edi);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        goto L_1020f84d;
    }
    edx = t7;
    g->edx = edx;
    return 0x80509050u;
L_1020f7e3: ;
    t8 = rd32(arg2 + 0x14c8u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x1022b680u), g->eax, ecx, t8, 1, 3, t8, edi, 1u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_1020f803;
    }
    edx = t11;
    g->edx = edx;
    return 0x80509050u;
L_1020f803: ;
    t12 = rd32(arg2 + 0x14c8u);
    g->eax = t12;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x1022b570u), g->eax, g->ecx, edx, 1, 3, t12, edi, 1u);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t14;
        goto L_1020f84d;
    }
    edx = t14;
    g->edx = edx;
    return 0x80909040u;
L_1020f823: ;
    if (rd32(arg2 + 0x1554u) == 0u) goto L_1020f84d;
    eax = rd32(arg2 + 0x1554u);
    if (rd8(eax) != 3u) goto L_1020f84d;
    t15 = (eax & 0xffff0000u) | rd16(rd32(arg2 + 0x1558u));
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x102092b0u), t15, g->ecx, edx, 1, 1, t15);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = 0x80509050u;
        edx = t17;
        goto L_1020f852;
    }
    edx = t17;
L_1020f84d: ;
    eax = 0x80808080u;
L_1020f852: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020f740(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
