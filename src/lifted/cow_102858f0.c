/* f_0x102858f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102858f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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

    if (rd32(COW_IMG(0x109a2748u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2748u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2748u));
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x102858b0u), 1, COW_IMG(0x103b7d48u));
        t1 = g->ecx;
        t2 = g->edx;
        g->ecx = t1;
        t3 = rd32(COW_IMG(0x109a2748u));
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t2, 1, 1, t3);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x109a2748u), 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (arg1 == 0u) goto L_1028596b;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1031201eu), 2, arg1, COW_IMG(0x1034f7fcu));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(COW_IMG(0x109a2748u), t7);
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_1028595c;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b7d1cu));
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7d04u), arg1);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1028595c: ;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10316fcau), eax, ecx, edx, 1, 4, eax, 0u, 0x40u, 0u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_1028596b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102858f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102858f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
