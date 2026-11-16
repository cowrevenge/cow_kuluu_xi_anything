/* f_0x101fac60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101fac60(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    if (t1 != 0u)
    {
        eax = t1;
        t2 = rd32(eax);
        t3 = rd32(rd32(eax) + 0x184u);
        t4 = rd32(rd32(eax) + 0x98u);
        d5 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a30u))) * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(sp0 + 0xcu, (float)d5);
        if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
        {
            ecx = t3;
            ebx = t4;
        }
        else
        {
            ecx = t3;
            ebx = t4;
            wr32(sp0 + 0xcu, 0x3f800000u);
        }
        t6 = rd32(sp0 + 0xcu);
        g->eax = arg2 + 1u;
        g->edx = arg1 + 2u;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, arg1 + 2u, arg2 + 1u, t6, 0x3f3851ebu, arg4, 0u, 8u, 0u);
        t8 = g->edx;
        cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, arg1, arg2, 0x3f19999au, 0x3f4ccccdu, 0x80404040u, 0u, 0x48u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fac60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fac60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
