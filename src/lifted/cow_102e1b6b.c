/* f_0x102e1b6b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102e1b6b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103282b9u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e1b75u));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x18u, self);
    wr32(self, COW_IMG(0x10346150u));
    wr32(sp0 - 8u, 0u);
    if (rd32(self + 0x10bcu) == 0u)
    {
        eax = COW_IMG(0x102e1b75u);
        ecx = self;
        edx = in_edx;
        loc_10 = t1;
    }
    else
    {
        loc_10 = t1;
        if (rd32(self + 0x10c0u) == 0u)
        {
            eax = rd32(self + 0x10c0u);
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = rd32(self + 0x10c0u);
            wr32(sp0 - 0x20u, in_ebx);
            wr32(sp0 - 0x14u, eax);
            if (rd32(self + 0x109cu) >= rd32(self + 0x10a0u))
            {
                ecx = self;
                edx = in_edx;
            }
            else
            {
                ebx = rd32(self + 0x109cu);
                loc_14 = eax;
                wr32(sp0 - 0x24u, in_edi);
                ecx = self;
                edx = in_edx;
L_102e1bad: ;
                edi = rd32(self + 0x1090u);
L_102e1bc8: ;
                if (edi < rd32(self + 0x1098u)) goto L_102e1bb5;
                if (ebx + 1u < rd32(self + 0x10a0u))
                {
                    ebx = ebx + 1u;
                    goto L_102e1bad;
                }
            }
        }
    }
    t6 = rd32(self + 0x10b8u);
    wr32(sp0 - 0x20u, t6);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(self + 0x10c0u);
    wr32(sp0 - 0x24u, t10);
    g->edx = t9;
    g->esp = sp0 - 0x20u;
    t11 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t10);
    t12 = g->edx;
    wr32(sp0 - 8u, 0xffffffffu);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x102e1799u), self, 0);
    t13 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t13);
    return;
L_102e1bb5: ;
    t2 = rd32(loc_14 + 4u);
    wr32(sp0 - 0x28u, t2);
    g->eax = loc_14;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t3 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t2);
    t4 = g->edx;
    t5 = rd32(sp0 - 0x14u) + 8u;
    wr32(sp0 - 0x14u, t5);
    eax = t3;
    ecx = rd32(sp0 - 0x28u);
    edx = t4;
    edi = edi + 4u;
    loc_14 = t5;
    goto L_102e1bc8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e1b6b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e1b6b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
