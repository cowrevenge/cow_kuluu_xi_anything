/* f_0x10133410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10133410(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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

    t1 = (self & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int16_t)t3 >= 0)
    {
        eax = (uint32_t)(int16_t)t3;
        ecx = t4;
        edx = t5;
        goto L_10133431;
    }
    eax = (uint32_t)(int16_t)t3;
    return eax & 0xffffff00u;
L_10133431: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100fe860u), 1, eax);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 8u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        ebx = t6;
        goto L_10133448;
    }
    eax = t6;
    return eax & 0xffffff00u;
L_10133448: ;
    if (arg1 == 0u) goto L_10133495;
    t9 = rd32(self + 0x150u);
    t10 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(self + 0x14fu);
    t11 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    g->edx = t9;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x101334c0u), t10, self, g->edx, 0, 3, t11, t10, t9);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_10133495;
    }
    ecx = t13;
    edx = t14;
    t15 = (edx & 0xffffff00u) | rd8(self + 0x14fu);
    t16 = rd32(self + 0x150u);
    t17 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    g->ebx = ebx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x100ed450u), 6, 2u, t17, t16, t15, ebx, in_edi);
    g->ebx = in_ebx;
    return (t18 & 0xffffff00u) | 1u;
L_10133495: ;
    t19 = (edx & 0xffffff00u) | rd8(self + 0x14fu);
    t20 = rd32(self + 0x150u);
    g->ebx = ebx;
    g->esp = sp0 - 8u;
    t21 = cow_cdecl(g, COW_IMG(0x100ed4c0u), 4, t20, t19, ebx, in_edi);
    g->ebx = in_ebx;
    return (t21 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10133410(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
