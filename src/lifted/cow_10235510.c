/* f_0x10235510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10235510(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    ecx = 0u;
    edx = arg2;
    esi = 0u;
L_10235521: ;
    if ((int32_t)esi >= 15)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        goto L_10235543;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    if ((uint8_t)eax == 0u) goto L_10235543;
    if ((uint8_t)eax == 0xau) goto L_10235543;
    if ((int8_t)eax >= 97)
    {
        if ((int8_t)eax <= 122)
        {
            wr8(edx, (uint8_t)eax);
            edx = edx + 1u;
            esi = esi + 1u;
        }
    }
    if ((int32_t)(ecx + 1u) < 30)
    {
        ecx = ecx + 1u;
        goto L_10235521;
    }
    ecx = ecx + 1u;
L_10235543: ;
    wr8(edx, 0u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t2 = cow_divs(g, t1, 0x64u);
    t3 = cow_mods(g, t1, 0x64u);
    if ((int32_t)esi >= 2)
    {
        eax = t2;
        edx = t3;
        goto L_10235577;
    }
    eax = t2;
    edx = t3;
    if ((int32_t)edx < 10) goto L_102355d7;
    if ((int32_t)edx >= 70) goto L_102355a2;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, 0x64u, edx, 1, 2, arg2, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, t5, t6, 1, 2, arg2, arg2);
    return t7;
L_10235577: ;
    if ((int32_t)esi >= 4) goto L_102355bc;
    if ((int32_t)edx < 40) goto L_102355d7;
    if ((int32_t)edx >= 80) goto L_1023559b;
L_10235586: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, 0x64u, edx, 1, 2, arg2, arg2);
    t16 = g->ecx;
    t17 = g->edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, t16, t17, 1, 2, arg2, arg2);
    return t18;
L_1023559b: ;
    if ((int32_t)edx >= 90) goto L_102355e1;
L_102355a2: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, 0x64u, edx, 1, 2, arg2, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, t9, t10, 1, 2, arg2, arg2);
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, t12, t13, 1, 2, arg2, arg2);
    return t14;
L_102355bc: ;
    if ((int32_t)esi >= 8) goto L_102355cd;
    if ((int32_t)edx < 40) goto L_102355d7;
    if ((int32_t)edx >= 60) goto L_102355e1;
    goto L_10235586;
L_102355cd: ;
    if ((int32_t)esi >= 12) goto L_102355e1;
    if ((int32_t)edx >= 30) goto L_102355e1;
L_102355d7: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x102355f0u), g->eax, 0x64u, edx, 1, 2, arg2, arg2);
    eax = t19;
L_102355e1: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10235510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10235510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
