/* f_0x10326637 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10326637(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    if (rd32(rd32(COW_IMG(0x109b26ecu))) == 0u)
    {
        edx = in_edx;
        loc_4 = self;
        goto L_10326698;
    }
    eax = rd32(rd32(COW_IMG(0x109b26ecu)));
    esi = rd32(COW_IMG(0x109b26ecu));
    ecx = self;
    edx = in_edx;
    ebx = rd32(COW_IMG(0x10329154u));
    loc_4 = self;
L_10326650: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, ebx, ecx, 8, 1u, 0u, eax, 0xffffffffu, 0u, 0u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_103266a0;
    }
    ecx = t2;
    edx = t3;
    ebp = t1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, ebp, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        loc_4 = t4;
        goto L_103266a0;
    }
    eax = t4;
    ecx = ebp;
    edx = t5;
    loc_4 = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, ebx, ecx, 8, 1u, 0u, rd32(esi), 0xffffffffu, eax, ebp, 0u, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t8;
        goto L_103266a0;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10326b7eu), eax, ecx, edx, 1, 3, loc_4, 0u, in_edi);
    t9 = g->edx;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        ecx = 0u;
        edx = t9;
        esi = esi + 4u;
        goto L_10326650;
    }
    edx = t9;
L_10326698: ;
    eax = 0u;
L_1032669a: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_103266a0: ;
    eax = 0xffffffffu;
    goto L_1032669a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10326637(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10326637(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
