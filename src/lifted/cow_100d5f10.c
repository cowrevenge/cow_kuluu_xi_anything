/* f_0x100d5f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d5f10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 >= 0) goto L_100d5f2d;
    if ((int32_t)arg1 > 9)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100d5fd2;
    }
L_100d5f2d: ;
    t1 = (arg1 + 0x30u) << 0x18u | 0x706577u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t3 = g->edx;
    if (rd32(t2) == 0u)
    {
        edx = t3;
        goto L_100d5f93;
    }
    edx = t3;
    ebp = rd32(t2);
    loc_8 = t1;
L_100d5f50: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x10029e70u), ebp, 0);
    t5 = g->edx;
    if (rd32(t4) == 0u)
    {
        edx = t5;
        goto L_100d5f84;
    }
    edx = t5;
    esi = 0u;
    edi = rd32(t4);
L_100d5f5f: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x1002c710u), self + 0x674u, 1, esi);
    t7 = g->edx;
    if (t6 != loc_8)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1002c730u), self + 0x674u, 3, esi, 0u, arg2);
        t8 = g->edx;
        edx = t8;
    }
    if (rd32(edi + 4u) != 0u)
    {
        esi = esi + 1u;
        edi = rd32(edi + 4u);
        goto L_100d5f5f;
    }
L_100d5f84: ;
    if (rd32(ebp + 4u) != 0u)
    {
        ebp = rd32(ebp + 4u);
        goto L_100d5f50;
    }
L_100d5f93: ;
    if (rd32(self + 0x70u) == 0u)
    {
        ebx = self + 0x674u & 0xffffff00u;
    }
    else
    {
        eax = rd32(self + 0x70u);
        ebx = (rd32(eax + 0x128u) >> 6u & 0xffffff00u) | (rd32(eax + 0x128u) >> 6u & 1u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t10 = g->edx;
    if (t9 != 1u)
    {
        eax = t9;
        edx = t10;
        goto L_100d5fca;
    }
    eax = t9;
    edx = t10;
    if ((uint8_t)ebx != 0u) goto L_100d5fca;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x100d5fe0u), self, 1, arg1);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_100d5fca: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x100d6180u), self, 1, arg1);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_100d5fd2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d5f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d5f10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
