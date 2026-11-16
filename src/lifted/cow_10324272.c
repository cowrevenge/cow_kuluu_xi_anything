/* f_0x10324272 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10324272(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u) goto L_10324295;
    if (arg3 == 0u) goto L_10324295;
    if (rd8(arg2) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2);
        goto L_1032429b;
    }
    if (arg1 != 0u)
    {
        wr16(arg1, 0u);
    }
L_10324295: ;
    eax = 0u;
    edx = in_edx;
L_10324297: ;
    g->edx = edx;
    return eax;
L_1032429b: ;
    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_103242b6;
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        wr16(arg1, (uint8_t)eax);
        edx = in_edx;
    }
L_103242b1: ;
    eax = 1u;
    goto L_10324297;
L_103242b6: ;
    if ((rd8((uint8_t)eax * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
    {
        ecx = rd32(COW_IMG(0x103d0030u));
        goto L_10324314;
    }
    ecx = rd32(COW_IMG(0x103d0030u));
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd32(COW_IMG(0x103d023cu));
        edx = in_edx;
        goto L_103242fa;
    }
    eax = rd32(COW_IMG(0x103d023cu));
    if ((int32_t)arg3 < (int32_t)eax)
    {
        edx = in_edx;
        goto L_10324304;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329144u)), arg1 != 0u, 6, rd32(COW_IMG(0x109b27c8u)), 9u, arg2, eax, arg1, arg1 != 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = rd32(COW_IMG(0x103d023cu));
        edx = t3;
        goto L_10324297;
    }
    eax = rd32(COW_IMG(0x103d023cu));
    ecx = t2;
    edx = t3;
L_103242fa: ;
    if (arg3 < eax) goto L_10324304;
    if (rd8(arg2 + 1u) != 0u) goto L_10324297;
L_10324304: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t7 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t8 = g->edx;
    wr32(t7, 0x2au);
    eax = 0xffffffffu;
    edx = t8;
    goto L_10324297;
L_10324314: ;
    g->eax = arg1 != 0u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329144u)), ecx, 6, rd32(COW_IMG(0x109b27c8u)), 9u, arg2, 1u, arg1, arg1 != 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        edx = t6;
        goto L_103242b1;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    goto L_10324304;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324272(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324272(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
