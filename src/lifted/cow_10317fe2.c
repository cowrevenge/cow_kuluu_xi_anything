/* f_0x10317fe2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10317fe2(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = (uint32_t)(int8_t)rd8(arg1);
    t1 = rd8(arg1);
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, self, in_edx, 1, 1, (uint32_t)(int8_t)t1);
    t3 = g->edx;
    if (t2 == 0x65u)
    {
        eax = t2;
        ecx = (uint32_t)(int8_t)t1;
        edx = t3;
        esi = arg1;
        goto L_10318022;
    }
    ecx = (uint32_t)(int8_t)t1;
    edx = t3;
    esi = arg1;
L_10317ff6: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        esi = esi + 1u;
        eax = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(esi) * 2u) & 4u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        esi = esi + 1u;
        g->eax = (uint32_t)(int8_t)rd8(esi);
        g->edx = edx;
        t4 = rd8(esi);
        g->esp = sp0;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)t4, 4u, in_esi);
        t6 = g->edx;
        eax = t5;
        ecx = 4u;
        edx = t6;
    }
    if (eax != 0u) goto L_10317ff6;
L_10318022: ;
    t7 = rd8(esi);
    t8 = rd8(COW_IMG(0x103d0240u));
    wr8(esi, (uint8_t)t8);
    eax = (eax & 0xffffff00u) | t7;
    ecx = (ecx & 0xffffff00u) | t8;
    esi = esi + 1u;
L_1031802d: ;
    t9 = rd8(esi);
    wr8(esi, (uint8_t)eax);
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)t9;
        ecx = ((ecx | t9) & 0xffffff00u) | rd8(esi);
        esi = esi + 1u;
        goto L_1031802d;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)t9;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317fe2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317fe2(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
