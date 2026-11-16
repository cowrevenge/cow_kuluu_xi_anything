/* f_0x10067630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10067630(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    ecx = self;
    ebx = in_ebx & 0xffffff00u;
    esi = arg1;
    edi = 0u;
L_10067640: ;
    if (rd8(arg2 + edi) == 0x3eu)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + edi);
        ecx = ecx & 0xffffff00u;
        edx = arg2 + edi;
        goto L_10067678;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + edi);
    ecx = ecx & 0xffffff00u;
    edx = arg2 + edi;
    if ((uint8_t)eax == 0x3cu) goto L_10067678;
    if ((uint8_t)eax == 0x2du) goto L_10067678;
    if ((uint8_t)eax == 0x2bu) goto L_10067678;
    if ((uint8_t)eax == 0x2au) goto L_10067678;
    if ((uint8_t)eax == 0x2fu) goto L_10067678;
    if ((uint8_t)eax == 0x21u) goto L_10067678;
    if ((uint8_t)eax == 0x26u) goto L_10067678;
    if ((uint8_t)eax == 0x7cu) goto L_10067678;
    if ((uint8_t)eax == 0x25u) goto L_10067678;
    if ((uint8_t)eax == 0x2cu) goto L_10067678;
    if ((uint8_t)eax != 0x3du) goto L_1006767e;
L_10067678: ;
    wr8(esi, 0x20u);
    ecx = (ecx & 0xffffff00u) | 1u;
    esi = esi + 1u;
L_1006767e: ;
    if ((uint8_t)eax == 0x29u)
    {
        wr8(esi, 0x20u);
        esi = esi + 1u;
    }
    wr8(esi, (uint8_t)eax);
    if ((uint8_t)eax != 0x28u)
    {
        esi = esi + 1u;
    }
    else
    {
        esi = esi + 1u;
        wr8(esi, 0x20u);
        esi = esi + 1u;
    }
    if ((uint8_t)ecx == 0u) goto L_100676c6;
    wr8(esi, 0x20u);
    if (rd8(arg2 + edi + 1u) == 0x7cu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg2 + edi + 1u);
        esi = esi + 1u;
        goto L_100676b6;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg2 + edi + 1u);
    esi = esi + 1u;
    if ((uint8_t)ecx == 0x26u) goto L_100676b6;
    if ((uint8_t)ecx == 0x3du) goto L_100676b6;
    if ((uint8_t)ecx == 0x3eu) goto L_100676b6;
    if ((uint8_t)ecx != 0x3cu) goto L_100676c6;
L_100676b6: ;
    wr8(esi - 1u, (uint8_t)ecx);
    wr8(esi, 0x20u);
    esi = esi + 1u;
    edi = edi + 2u;
L_10067777: ;
    if (rd8(arg2 + edi) != 0u) goto L_10067640;
    wr8(esi, 0u);
    if (rd8(esi - 1u) != 0x20u) goto L_10067797;
    eax = (eax & 0xffffff00u) | rd8(esi - 1u);
    esi = esi - 1u;
L_1006778c: ;
    wr8(esi, 0u);
    if (rd8(esi - 1u) == 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi - 1u);
        esi = esi - 1u;
        goto L_1006778c;
    }
L_10067797: ;
    g->ebx = in_ebx;
    return;
L_100676c6: ;
    if ((uint8_t)eax != 0x2du) goto L_100676d8;
    if ((uint8_t)ebx != 0u) goto L_10067772;
    esi = esi - 1u;
L_10067776: ;
    edi = edi + 1u;
    goto L_10067777;
L_100676d8: ;
    if ((int8_t)eax < 48)
    {
        ebx = ebx & 0xffffff00u;
        goto L_1006770d;
    }
    ebx = ebx & 0xffffff00u;
    if ((int8_t)eax > 57) goto L_1006770d;
    ecx = 1u;
    ebx = (ebx & 0xffffff00u) | 1u;
L_100676e9: ;
    if (ecx != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + edx);
        goto L_100676f9;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + edx);
    if ((uint8_t)eax == 0x78u) goto L_10067701;
    if ((uint8_t)eax == 0x58u) goto L_10067701;
L_100676f9: ;
    if ((int8_t)eax < 48) goto L_10067707;
    if ((int8_t)eax > 57) goto L_10067707;
L_10067701: ;
    wr8(esi, (uint8_t)eax);
    ecx = ecx + 1u;
    esi = esi + 1u;
    goto L_100676e9;
L_10067707: ;
    edi = ecx + edi - 1u;
    goto L_10067776;
L_1006770d: ;
    if ((int8_t)eax < 97) goto L_10067776;
    if (rd8(arg2 + edi + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + edi + 1u);
        ebx = (ebx & 0xffffff00u) | 1u;
        goto L_10067772;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + edi + 1u);
    ebx = (ebx & 0xffffff00u) | 1u;
L_1006771b: ;
    if ((uint8_t)eax == 0x3cu) goto L_10067772;
    if ((uint8_t)eax == 0x3eu) goto L_10067772;
    if ((uint8_t)eax == 0x28u) goto L_10067772;
    if ((uint8_t)eax == 0x29u) goto L_10067772;
    if ((uint8_t)eax == 0x2du) goto L_10067772;
    if ((uint8_t)eax == 0x2bu) goto L_10067772;
    if ((uint8_t)eax == 0x2au) goto L_10067772;
    if ((uint8_t)eax == 0x2fu) goto L_10067772;
    if ((uint8_t)eax == 0x21u) goto L_10067772;
    if ((uint8_t)eax == 0x26u) goto L_10067772;
    if ((uint8_t)eax == 0x7cu) goto L_10067772;
    if ((uint8_t)eax == 0x25u) goto L_10067772;
    if ((uint8_t)eax == 0x2cu) goto L_10067772;
    if ((uint8_t)eax == 0x3du) goto L_10067772;
    if ((uint8_t)eax == 0u) goto L_10067765;
    wr8(esi, (uint8_t)eax);
    if (rd8(arg2 + edi + 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + edi + 2u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_1006771b;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + edi + 2u);
    esi = esi + 1u;
    edi = edi + 1u;
L_10067772: ;
    wr8(esi, 0x20u);
    esi = esi + 1u;
    goto L_10067776;
L_10067765: ;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ff8u), in_edi);
    t2 = g->ecx;
    eax = t1;
    ecx = t2;
    goto L_10067772;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10067630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
