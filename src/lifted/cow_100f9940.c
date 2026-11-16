/* f_0x100f9940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f9940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    wr32(COW_IMG(0x104df920u), 0u);
    wr32(COW_IMG(0x104df924u), 0u);
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x100da4f0u), 0u, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 1u)
    {
        ecx = t2;
        edx = t3;
        goto L_100f9958;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_100f9958: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100f04f0u), g->eax, g->ecx, edx, 1, 1, COW_IMG(0x1036205cu));
    wr32(COW_IMG(0x104dfd94u), COW_IMG(0x109b2a80u));
    edi = COW_IMG(0x109b2a80u);
    eax = 0u;
    ecx = 0x112edu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd32(COW_IMG(0x104dfd94u));
    wr32(COW_IMG(0x104dfd98u), eax);
    wr32(t4 + 0x44bacu, arg1);
    t5 = rd32(COW_IMG(0x104dfd94u)) + 0x43634u;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x100df420u), t5, g->ecx, g->edx, 1, 2, t5, 0x800u);
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x104dfd94u)) + 0x40e44u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x100df4b0u), 2, t8, 0x27f0u);
    wr32(rd32(COW_IMG(0x104dfd94u)) + 0x40e40u, 1u);
    wr32(rd32(COW_IMG(0x104dfd94u)), 0u);
    t9 = rd32(COW_IMG(0x104dfd94u));
    wr32(COW_IMG(0x104dfd98u), 0u);
    wr32(t9, t9 + 4u);
    t10 = rd32(rd32(COW_IMG(0x104dfd94u)));
    t11 = rd32(COW_IMG(0x104dfd94u));
    wr32(COW_IMG(0x104dfd98u), t10);
    eax = 0x43e34u;
    edx = t11;
L_100f99fd: ;
    t12 = rd32(COW_IMG(0x104dfd94u));
    wr32(eax + t12, 0x3e8u);
    if (eax + 4u < 0x442b4u)
    {
        eax = eax + 4u;
        goto L_100f99fd;
    }
    eax = eax + 4u;
    ecx = t12;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_stdcall(g, COW_IMG(0x100f9b20u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = cow_stdcall(g, COW_IMG(0x101133a0u), 0);
    return (t16 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f9940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
