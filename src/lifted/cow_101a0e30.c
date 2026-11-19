/* f_0x101a0e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a0e30(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a0e45u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_101a0e45;
    case 0x101a0e64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0e64;
    case 0x101a0e6fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0e6f;
    case 0x101a0e84u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0e84;
    case 0x101a0e8au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0e8a;
    case 0x101a0e92u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0e92;
    case 0x101a0e96u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0e96;
    case 0x101a0ea0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ea0;
    case 0x101a0eaau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eaa;
    case 0x101a0eaeu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eae;
    case 0x101a0eb3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eb3;
    case 0x101a0eb7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eb7;
    case 0x101a0ec1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ec1;
    case 0x101a0ec9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ec9;
    case 0x101a0ed3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ed3;
    case 0x101a0edbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0edb;
    case 0x101a0ee3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ee3;
    case 0x101a0eebu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eeb;
    case 0x101a0eedu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eed;
    case 0x101a0ef5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ef5;
    case 0x101a0ef7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0ef7;
    case 0x101a0effu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0eff;
    case 0x101a0f03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0f03;
    case 0x101a0f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x10u); goto E_101a0f14;
    case 0x101a0f1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_101a0f1f;
    default: break;
    }
#endif

    COW_AT(101a0e30)
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
    COW_AT(101a0e45)
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t1 = cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x1cu), in_edx, 1, 0xffffffffu);
        t2 = g->edx;
        t3 = rd32(self + 0x14u);
        if (rd32(self + 0x10u) == rd32(self + 0x14u))
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            ecx = t3;
            edi = rd32(self + 0x10u);
            loc_c = t3;
    COW_AT(101a0e64)
            t4 = rd32(self + 4u);
            loc_4 = t4;
L_101a0e6f: ;
    COW_AT(101a0e6f)
            if (rd32(arg1 + 4u) != rd32(edi * 0x124u + loc_4 + 4u)) goto L_101a0ee3;
            ebx = loc_4;
            ebp = edi * 0x124u + loc_4;
    COW_AT(101a0e84)
            eax = arg1 + 8u;
            esi = ebp + 8u;
L_101a0e8a: ;
    COW_AT(101a0e8a)
            if (rd8(eax) != rd8(esi))
            {
                cf = rd8(eax) < rd8(esi);
                goto L_101a0eae;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            ebx = (ebx & 0xffffff00u) | rd8(eax);
    COW_AT(101a0e92)
            if ((uint8_t)ecx == 0u) goto L_101a0eaa;
    COW_AT(101a0e96)
            if (rd8(eax + 1u) != rd8(esi + 1u))
            {
                cf = rd8(eax + 1u) < rd8(esi + 1u);
                goto L_101a0eae;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(101a0ea0)
            if ((uint8_t)ecx != 0u)
            {
                eax = eax + 2u;
                esi = esi + 2u;
                goto L_101a0e8a;
            }
L_101a0eaa: ;
    COW_AT(101a0eaa)
            eax = 0u;
L_101a0eb3: ;
    COW_AT(101a0eb3)
            if (eax != 0u) goto L_101a0edb;
    COW_AT(101a0eb7)
            if (rd32(arg1 + 0x10cu) == 0u)
            {
                eax = rd32(arg1 + 0x10cu);
                goto L_101a0ef7;
            }
            eax = rd32(arg1 + 0x10cu);
    COW_AT(101a0ec1)
            if (eax == rd32(ebp + 0x10cu)) goto L_101a0ef7;
    COW_AT(101a0ec9)
            if (rd32(arg1 + 0x108u) == 0u)
            {
                eax = rd32(arg1 + 0x108u);
                goto L_101a0ef7;
            }
            eax = rd32(arg1 + 0x108u);
    COW_AT(101a0ed3)
            if (eax == rd32(ebp + 0x108u)) goto L_101a0ef7;
L_101a0edb: ;
    COW_AT(101a0edb)
            ecx = loc_c;
L_101a0ee3: ;
    COW_AT(101a0ee3)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 8u))
            {
                eax = rd32(self + 8u);
                edi = edi + 1u;
            }
            else
            {
                eax = rd32(self + 8u);
    COW_AT(101a0eeb)
                edi = 0u;
            }
    COW_AT(101a0eed)
            if (edi != ecx) goto L_101a0e6f;
    COW_AT(101a0ef5)
L_101a0eff: ;
    COW_AT(101a0eff)
            if (edi == ecx)
            {
                edx = arg1;
            }
            else
            {
    COW_AT(101a0f03)
                t5 = rd32(self + 4u);
                wr32(edi * 0x124u + t5 + 4u, 9u);
                eax = t5;
                edx = edi * 0x49u;
            }
        }
    COW_AT(101a0f14)
        g->esp = sp0 - 0x1cu;
        cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x1cu), edx, 0);
    }
    COW_AT(101a0f1f)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101a0eae: ;
    COW_AT(101a0eae)
    eax = -cf + 1u - cf;
    goto L_101a0eb3;
L_101a0ef7: ;
    COW_AT(101a0ef7)
    ecx = loc_c;
    goto L_101a0eff;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a0e30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a0e45u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a0e64u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a0e6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a0e84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0e8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0e92u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0e96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0ea0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0eaau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0eaeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0eb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0eb7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0ec1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0ec9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0ed3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0edbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0ee3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a0eebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a0eedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a0ef5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0ef7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0effu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a0f03u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101a0f14u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101a0f1fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0e30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101a0e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
