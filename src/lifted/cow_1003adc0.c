/* f_0x1003adc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1003adc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0x5du);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10072430u), sp0 + 8u, g->ecx, g->edx, 0, 4, sp0 + 8u, arg2, 0x5du, 0u);
    if (rd32(t1) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(t1);
        eax = rd32(eax);
    }
    if (eax == 0u) goto L_1003ae33;
    esi = eax;
    ecx = arg1;
L_1003adf1: ;
    wr32(sp0 - 0x10u, 8u);
    wr32(sp0 - 0x14u, arg1 + 8u);
    wr32(sp0 - 0x18u, esi + 0x48u);
    g->ecx = ecx;
    g->edx = esi + 0x48u;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi + 0x48u, arg1 + 8u, 8u, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        goto L_1003ae20;
    }
    edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x1003aab0u), self, 0);
    if (rd32(t5) == 0u)
    {
        ecx = rd32(t5);
        goto L_1003ae20;
    }
    eax = t5;
    ecx = rd32(t5);
L_1003ae11: ;
    if (rd32(ecx + 8u) == esi) goto L_1003ae3b;
    if (rd32(ecx + 0x38u) != 0u)
    {
        eax = ecx + 0x38u;
        ecx = rd32(ecx + 0x38u);
        goto L_1003ae11;
    }
    ecx = rd32(ecx + 0x38u);
L_1003ae20: ;
    if (rd32(esi + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        esi = rd32(esi + 8u);
        eax = rd32(esi);
    }
    if (eax != 0u)
    {
        esi = eax;
        goto L_1003adf1;
    }
L_1003ae33: ;
    return 0u;
L_1003ae3b: ;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return rd32(eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003adc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003adc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
