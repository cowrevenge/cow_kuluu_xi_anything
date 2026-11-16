/* f_0x1020f440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1020f440(Guest* g)
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

    if ((int16_t)rd16(sp0 + 4u) < 0)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_1020f4d3;
    }
    eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
    if ((int16_t)eax >= 12) goto L_1020f4d3;
    g->ecx = rd32(COW_IMG(0x10664494u));
    g->edx = (uint32_t)(int16_t)eax;
    t1 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100e3200u), 1, (uint32_t)(int16_t)eax);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    t5 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x100f9900u), 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x100e3200u), 1, (uint8_t)t6);
    t10 = g->ecx;
    t11 = g->edx;
    if (t2 != 0xf800000u)
    {
        ecx = t10;
        edx = t11;
        esi = t1 + 0x5cu;
        edi = t2;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t1 + 0x5cu;
        edi = eax;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x101080e0u), 1, esi);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x101080a0u), 3, esi, edi, edi);
    t15 = g->edx;
    g->edx = t15;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t14, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 0u);
    t17 = g->edx;
    t18 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, t17, 0);
    t19 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x10385a64u));
    g->esp = sp0;
    g->edx = t19;
    return cow_tailcall(g, COW_IMG(0x1015e910u), t18, COW_IMG(0x10621838u), t19);
L_1020f4d3: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020f440(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
