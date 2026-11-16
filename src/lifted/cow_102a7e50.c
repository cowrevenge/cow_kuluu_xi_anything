/* f_0x102a7e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a7e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edi = g->edi;

    t1 = rd32(rd32(sp0 + 4u) + 0x610u) * rd32(rd32(sp0 + 4u) + 0x62cu);
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 1u, COW_IMG(0x103be434u), 0x2f9u, in_edi);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 + 4u, rd32(t2));
    if ((int32_t)rd16(t2 + 0x604u) <= 0)
    {
        edx = t5;
        esi = t2;
        edi = t3;
        goto L_102a7f09;
    }
    eax = rd16(t2 + 0x604u);
    ecx = t4;
    ebx = 0u;
    esi = t2;
    loc_4 = t3;
    loc_8 = t3;
L_102a7e9b: ;
    if (ebx != eax - 1u)
    {
        edi = rd32(esi + 0x638u);
    }
    else
    {
        ecx = rd32(esi + 0x638u) * ebx;
        edi = rd32(esi + 0x610u) - rd32(esi + 0x638u) * ebx;
    }
    t6 = edi * rd32(esi + 0x62cu);
    t7 = rd32(sp0 + 4u);
    g->ebx = ebx;
    g->edx = loc_8;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x102a7f50u), ecx, 3, t7, loc_8, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_102a7f27;
    }
    edi = t6;
    t11 = rd32(sp0 + 4u) + rd16(ebx * 2u + rd32(esi + 0x608u));
    t12 = rd16(esi + 0x604u);
    t13 = rd16(ebx * 2u + rd32(esi + 0x608u));
    wr32(sp0 + 4u, t11);
    if ((int32_t)(ebx + 1u) < (int32_t)t12)
    {
        eax = t12;
        ecx = t11;
        ebx = ebx + 1u;
        loc_8 = edi + loc_8;
        goto L_102a7e9b;
    }
    edx = t13;
    edi = loc_4;
L_102a7f09: ;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(esi), COW_IMG(0x103be434u), 0x30au);
    wr32(esi, edi);
    g->ebx = in_ebx;
    return;
L_102a7f27: ;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, loc_4, COW_IMG(0x103be434u), 0x304u);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a7e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a7e50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
