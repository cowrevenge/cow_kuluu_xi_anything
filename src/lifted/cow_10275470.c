/* f_0x10275470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10275470(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    if (rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u) >= rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u))
    {
        eax = COW_IMG(0x1099cef8u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u;
        edx = rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
        ebx = 0u;
        ebp = 0u;
        esi = 0u;
        edi = 0u;
        loc_4 = 0u;
        goto L_102754d8;
    }
    ecx = rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
    edx = rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
    ebx = 0u;
    ebp = 0u;
    esi = 0u;
    edi = 0u;
    loc_4 = 0u;
L_1027549b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10275310u), 1, ecx + 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (eax != 3u)
        {
            ebx = ebx + 1u;
            esi = esi + rd32(ecx + 4u);
        }
    }
    else
    {
        ecx = t2;
        edx = t3;
        edi = edi + rd32(ecx + 4u);
        loc_4 = loc_4 + 1u;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10275340u), 1, ecx);
    t5 = g->edx;
    if (t4 < t5)
    {
        ecx = t4;
        edx = t5;
        ebp = ebp + 0x10u;
        goto L_1027549b;
    }
    eax = t4;
    edx = t5;
    ebp = ebp + 0x10u;
L_102754d8: ;
    g->eax = eax;
    g->ecx = loc_4;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b292cu), edi);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->esp = sp0 - 0x24u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2908u), esi);
    t10 = g->ecx;
    g->ecx = t10;
    g->edx = loc_4;
    g->esp = sp0 - 0x30u;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28e4u), ebp);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x34u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28b4u), COW_IMG(0x103b28e4u));
    t15 = g->ecx;
    t16 = g->edx;
    t17 = ebp + edi + esi;
    g->edx = t16;
    g->esp = sp0 - 0x40u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2890u), t17);
    t19 = g->edx;
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10275470(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
