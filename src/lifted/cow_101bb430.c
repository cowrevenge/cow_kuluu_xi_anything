/* f_0x101bb430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101bb430(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101549e0u), t1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 <= 0)
    {
        ebx = 0u;
        loc_4 = t3;
        goto L_101bb48d;
    }
    ecx = t4;
    edx = t5;
    ebx = 0u;
    esi = 0u;
    edi = t1;
    loc_4 = t3;
L_101bb44e: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1022aff0u), ecx, 1, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_101bb477;
    }
    edx = t8;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101549f0u), edi, 1, esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)(uint16_t)t9 < 385)
    {
        ecx = t10;
        edx = t11;
        goto L_101bb476;
    }
    eax = (uint16_t)t9;
    ecx = t10;
    edx = t11;
    if ((int32_t)eax <= 387) goto L_101bb480;
L_101bb476: ;
    ebx = ebx + 1u;
L_101bb477: ;
    if ((int32_t)(esi + 1u) < (int32_t)loc_4)
    {
        esi = esi + 1u;
        goto L_101bb44e;
    }
L_101bb480: ;
    if ((int32_t)ebx >= 254)
    {
        ebx = 0xfeu;
    }
L_101bb48d: ;
    wr32(arg1 + 0x44u, ebx);
    wr32(arg1 + 0x48u, ebx * 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bb430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
