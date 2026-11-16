/* f_0x101afc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101afc40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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

    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101afcd4;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    if (rd8(rd32(self + 0x1cu) + 0xf0ecu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x1cu) + 0xf0ecu);
        goto L_101afca3;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x1cu) + 0xf0ecu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101afcd4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        goto L_101afcd4;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t8 = g->edx;
    t9 = cow_fastcall(g, COW_IMG(0x101b5800u), rd32(self + 0x1cu), t8, 0);
    t10 = g->edx;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371ae8u), 1u, 0u);
    return (t11 & 0xffffff00u) | 1u;
L_101afca3: ;
    if (rd32(COW_IMG(0x10662788u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10662788u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662788u));
        if (rd32(ecx + 8u) == 0u)
        {
            eax = rd32(ecx + 8u);
        }
        else
        {
            eax = rd32(ecx + 8u);
            t12 = rd32(eax + 0x34u) & 0xfffffffeu;
            wr32(eax + 0x34u, t12);
            ecx = rd32(COW_IMG(0x10662788u));
        }
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x1015dbb0u), COW_IMG(0x10621838u), 2, ecx, 0u);
    return (t13 & 0xffffff00u) | 1u;
L_101afcd4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101afc40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101afc40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
