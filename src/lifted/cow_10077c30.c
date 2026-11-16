/* f_0x10077c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10077c30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10077cdc;
    }
    edi = rd32(sp0 + 4u);
    if (rd8(edi) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(edi);
        edx = in_edx;
        goto L_10077cdc;
    }
    eax = (in_eax & 0xffffff00u) | rd8(edi);
    wr8(sp0 + 4u, (uint8_t)eax);
    if ((uint8_t)eax < 0x80u) goto L_10077c59;
    if ((uint8_t)eax <= 0x9fu)
    {
        edx = in_edx;
        goto L_10077cdc;
    }
L_10077c59: ;
    if ((uint8_t)eax < 0xe0u) goto L_10077c61;
    if ((uint8_t)eax <= 0xffu)
    {
        edx = in_edx;
        goto L_10077cdc;
    }
L_10077c61: ;
    t1 = (uint8_t)rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1031471eu), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_10077cdc;
    }
    ecx = t3;
    edx = t4;
    esi = t1;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(edi, (uint8_t)t5);
    eax = t5;
    ecx = t6;
    edx = t7;
    ebx = 1u;
    edi = edi + 1u;
L_10077c89: ;
    t8 = rd8(edi);
    wr8(sp0 + 4u, (uint8_t)t8);
    if ((uint8_t)t8 == 0u)
    {
        eax = (eax & 0xffffff00u) | t8;
        goto L_10077ccc;
    }
    eax = (eax & 0xffffff00u) | t8;
    if ((uint8_t)eax < 0x80u) goto L_10077c9b;
    if ((uint8_t)eax <= 0x9fu) goto L_10077cdc;
L_10077c9b: ;
    if ((uint8_t)eax < 0xe0u) goto L_10077ca3;
    if ((uint8_t)eax <= 0xffu) goto L_10077cdc;
L_10077ca3: ;
    t9 = (uint8_t)rd32(sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x1031471eu), ecx, 1, t9);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t12;
        goto L_10077cdc;
    }
    ecx = t11;
    edx = t12;
    esi = t9;
    g->esp = sp0 - 0xcu;
    t13 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, ecx, edx, 1, 1, esi);
    t14 = g->ecx;
    t15 = g->edx;
    wr8(edi, (uint8_t)t13);
    if ((int32_t)(ebx + 1u) < 15)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        ebx = ebx + 1u;
        edi = edi + 1u;
        goto L_10077c89;
    }
    eax = t13;
    edx = t15;
    ebx = ebx + 1u;
L_10077ccc: ;
    if ((int32_t)ebx < 3) goto L_10077cdc;
    if ((int32_t)ebx > 15) goto L_10077cdc;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10077cdc: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
