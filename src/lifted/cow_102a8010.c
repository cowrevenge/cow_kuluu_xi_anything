/* f_0x102a8010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a8010(Guest* g)
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
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(rd32(sp0 + 4u) + 0x610u) * rd32(rd32(sp0 + 4u) + 0x62cu);
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 1u, COW_IMG(0x103be434u), 0x36cu, in_edi);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 + 4u, rd32(t2));
    if ((int32_t)rd16(t2 + 0x604u) <= 0)
    {
        ecx = t4;
        edx = t5;
        esi = t2;
        edi = t3;
        goto L_102a80d7;
    }
    eax = rd16(t2 + 0x604u);
    ecx = t4;
    edx = t5;
    ebx = 0u;
    esi = t2;
    loc_4 = t3;
    loc_8 = t3;
L_102a805b: ;
    if (ebx != eax - 1u)
    {
        edi = rd32(esi + 0x638u);
    }
    else
    {
        ecx = rd32(esi + 0x638u) * ebx;
        edi = rd32(esi + 0x610u) - rd32(esi + 0x638u) * ebx;
    }
    g->ecx = ecx;
    g->edx = edx;
    t6 = rd32(esi + 0x62cu);
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x102a8100u), 3, esi, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_102a80d3;
    }
    ecx = t8;
    edi = edi * t6;
    t10 = rd32(sp0 + 4u);
    g->eax = t10;
    g->edx = loc_8;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x109a2870u)), ecx, 3, t10, loc_8, edi);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_102a80d3;
    }
    t14 = rd32(sp0 + 4u) + rd16(ebx * 2u + rd32(esi + 0x608u));
    t15 = rd16(esi + 0x604u);
    t16 = rd16(ebx * 2u + rd32(esi + 0x608u));
    wr32(sp0 + 4u, t14);
    if ((int32_t)(ebx + 1u) < (int32_t)t15)
    {
        eax = t15;
        ecx = t14;
        edx = t16;
        ebx = ebx + 1u;
        loc_8 = edi + loc_8;
        goto L_102a805b;
    }
    ecx = t14;
    edx = t16;
L_102a80d3: ;
    edi = loc_4;
L_102a80d7: ;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(esi), COW_IMG(0x103be434u), 0x380u);
    wr32(esi, edi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a8010(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
