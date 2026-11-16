/* f_0x1029ce60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1029ce60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 1u) goto L_1029ce72;
    esi = COW_IMG(0x103b4674u);
L_1029ce7c: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10292200u), 4, esi, 1u, 1u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 1u)
    {
        ecx = t2;
        edx = t3;
        goto L_1029ceb6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_1029ce95: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t14 = g->ecx;
    t15 = g->edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc828u), COW_IMG(0x103b379cu));
    eax = t16;
L_1029ceb1: ;
    return eax & 0xffffff00u;
L_1029ce72: ;
    if (arg2 != 2u)
    {
        eax = arg2;
        goto L_1029ceb1;
    }
    esi = COW_IMG(0x103b467cu);
    goto L_1029ce7c;
L_1029ceb6: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10292200u), 4, esi + 1u, 1u, 1u, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 1u)
    {
        edx = t6;
        goto L_1029ced0;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    goto L_1029ce95;
L_1029ced0: ;
    g->ecx = esi + 2u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10292200u), 4, esi + 2u, 1u, 1u, arg1);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 1u)
    {
        ecx = t8;
        edx = t9;
        goto L_1029ceea;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    goto L_1029ce95;
L_1029ceea: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x10292200u), 4, esi + 3u, 1u, 1u, arg1);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 1u)
    {
        eax = t10;
        goto L_1029cf04;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    goto L_1029ce95;
L_1029cf04: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029ce60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029ce60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
