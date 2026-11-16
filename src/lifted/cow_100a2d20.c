/* f_0x100a2d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a2d20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 0x34u, 0u);
    wr8(self + 0x59u, rd8(arg1 + 5u));
    if (rd32(self + 0x48u) == 0u)
    {
        eax = rd32(self + 0x48u);
    }
    else
    {
        eax = rd32(self + 0x48u);
        wr8(eax + 1u, rd8(arg1 + 5u));
    }
    if (rd8(arg1 + 6u) != 2u)
    {
        edx = in_edx;
    }
    else
    {
        if ((int8_t)rd8(arg1 + 5u) < -3)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 5u);
            edx = in_edx;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 5u);
            if ((int8_t)eax <= -2) goto L_100a2d57;
            if ((uint8_t)eax != 1u)
            {
                edx = in_edx;
                goto L_100a2d78;
            }
L_100a2d57: ;
            if (rd32(self + 0x48u) == 0u)
            {
                eax = rd32(self + 0x48u);
                edx = in_edx;
            }
            else
            {
                eax = rd32(self + 0x48u);
                t1 = rd32(arg1 + 0x18u);
                wr32(eax + 0x18u, t1);
                esi = arg1 + 0x1cu;
                edi = rd32(self + 0x48u) + 0x1cu;
                ecx = 9u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                edx = t1;
            }
        }
    }
L_100a2d78: ;
    if ((int8_t)rd8(arg1 + 5u) < 0)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 5u);
        goto L_100a2db8;
    }
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x100a2c30u), self, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_100a2db8;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    t5 = (eax & 0xffffff00u) | rd8(arg1 + 4u);
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100a2be0u), ecx, 3, t5, 0u, 0u);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_100a2db8;
    }
    edx = t7;
    if (rd32(self + 0x4cu) == 0u)
    {
        eax = rd32(self + 0x4cu);
    }
    else
    {
        eax = rd32(self + 0x4cu);
        t8 = rd32(self + 0x48u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t9 = cow_thiscall_cdecl(g, eax, t8, 2, t8, arg1);
        eax = t9;
    }
    wr8(self + 0x58u, 0xeu);
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_100a2db8: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x100a29f0u), self, edx, 0);
    g->ebx = in_ebx;
    return t10 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2d20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
