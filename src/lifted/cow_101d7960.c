/* f_0x101d7960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101d7960(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 296u);

    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    wr32(sp0 - 0x114u, arg1);
    wr32(sp0 - 0x118u, COW_IMG(0x1037ee34u));
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->edx = in_edx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037ee34u), arg1, in_edi, in_esi);
    t1 = g->edx;
    wr32(sp0 - 0x114u, sp0 - 0x104u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, arg1);
    g->ecx = self;
    g->edx = t1;
    g->esp = sp0 - 0x110u;
    t2 = cow_stdcall(g, COW_IMG(0x101d76a0u), 3, arg1, 0u, sp0 - 0x104u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_101d79c5;
    }
    eax = t2;
    ecx = t3;
    esi = 0u;
L_101d7999: ;
    t5 = rd32(sp0 - 0x104u);
    wr32(sp0 - 0x114u, t5);
    wr32(sp0 - 0x118u, eax);
    wr32(sp0 - 0x11cu, esi);
    wr32(sp0 - 0x120u, COW_IMG(0x1037ee28u));
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->edx = t5;
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037ee28u), esi, eax, t5);
    t6 = g->edx;
    wr32(sp0 - 0x114u, sp0 - 0x104u);
    wr32(sp0 - 0x118u, esi + 1u);
    wr32(sp0 - 0x11cu, arg1);
    g->ecx = self;
    g->edx = t6;
    t7 = cow_stdcall(g, COW_IMG(0x101d76a0u), 3, arg1, esi + 1u, sp0 - 0x104u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        esi = esi + 1u;
        goto L_101d7999;
    }
    eax = t7;
    edx = t9;
L_101d79c5: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d7960(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
