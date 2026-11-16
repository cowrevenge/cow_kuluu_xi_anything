/* f_0x101c2050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c2050(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 860u);

    wr32(sp0 - 0x228u, in_ebx);
    wr32(sp0 - 0x22cu, in_ebp);
    wr32(sp0 - 0x230u, in_esi);
    wr32(sp0 - 0x234u, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x238u, sp0 - 0x100u);
    wr32(sp0 - 0x23cu, arg1);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    g->ebx = 0u;
    g->eax = sp0 - 0x100u;
    g->edx = in_edx;
    g->esp = sp0 - 0x234u;
    t1 = cow_thiscall(g, COW_IMG(0x101c3a90u), self, 2, arg1, sp0 - 0x100u);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        goto L_101c20d3;
    }
    eax = t1;
    edx = t2;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0xffffffffu;
L_101c20d3: ;
    wr32(sp0 - 0x238u, sp0 - 0x100u);
    wr32(sp0 - 0x23cu, 0x100u);
    wr32(sp0 - 0x240u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 5u);
    g->esp = sp0 - 0x234u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    wr32(sp0 - 0x118u, arg2);
    wr32(sp0 - 0x354u, 5u);
    esi = sp0 - 0x21cu;
    edi = sp0 - 0x350u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x250u, 0u);
    wr32(sp0 - 0x24cu, arg2);
    wr32(sp0 - 0x248u, 0u);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x23cu, 0u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x358u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->eax = sp0 - 0x358u;
    g->ecx = 0u;
    g->edx = 0u;
    g->esp = sp0 - 0x34cu;
    t3 = cow_cdecl(g, COW_IMG(0x101a0730u), 3, COW_IMG(0x10337200u), 5u, rd32(sp0 - 0x350u));
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        edx = t5;
        esi = t3;
    }
    else
    {
        ecx = t4;
        edx = t5;
        esi = t3;
        wr32(sp0 - 0x238u, (uint32_t)((int32_t)arg1 >> 8u));
        wr32(sp0 - 0x23cu, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x234u;
        cow_call_regs(g, COW_IMG(0x10253690u), (uint32_t)((int32_t)arg1 >> 8u), ecx, g->edx, 1, 2, arg1, (uint32_t)((int32_t)arg1 >> 8u));
        t6 = g->edx;
        edx = t6;
    }
    g->ebx = rd32(sp0 - 0x228u);
    g->esi = rd32(sp0 - 0x230u);
    g->edi = rd32(sp0 - 0x234u);
    g->ebp = rd32(sp0 - 0x22cu);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2050(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
