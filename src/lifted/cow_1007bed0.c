/* f_0x1007bed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1007bed0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_1007bf08;
    }
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1007bf08;
    }
    ecx = t2;
    edx = t3;
    esi = t1;
L_1007beea: ;
    g->eax = esi + 2u;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x1008b2b0u), g->eax, ecx, edx, 1, 3, esi + 2u, arg1, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u) goto L_1007bf0d;
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        esi = t7;
        goto L_1007beea;
    }
    eax = t7;
L_1007bf08: ;
    return eax & 0xffffff00u;
L_1007bf0d: ;
    t10 = rd32(esi + 0x14u);
    wr32(arg2 + 4u, t10);
    t11 = rd16(esi + 0x18u);
    wr32(arg2, t11);
    return (arg2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007bed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
